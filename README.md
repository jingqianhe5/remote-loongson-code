# 农芯种科Soc 

一种isp和tpu异构的Soc系统
基于龙芯 LA500 处理器核的片上系统（SOC），集成图像信号处理（ISP）加速器、DMA 引擎和 DVI 视频输出，面向 2026 集创赛龙芯中科杯。

## 功能特性

- **处理器**：LA500 LoongArch32 五级流水线 CPU，含 Cache 和 TLB
- **存储**：BaseRAM（8MB）+ ExtRAM（8MB），AXI 总线接口
- **ISP 加速器**：可配置图像处理流水线（滤波、锐化、边缘检测、色彩校正）
- **TPU ISP 助手**：关键词优先，未命中时由 `training/` 导出的 Q8.8 模型在 TPU 上推理，CPU 将结果写入 ISP 配置寄存器
- **DMA 引擎**：内存间高速数据搬运
- **视频输出**：DVI 控制器
- **外设**：UART、LED、拨码开关、七段数码管、按键
- **总线**：AXI 互联，含跨时钟域（CDC）处理

## 目录结构

```
.
├── rtl/                  # RTL 源码（Verilog）
│   ├── soc_top.v         # SOC 顶层模块
│   ├── config.h          # AXI 参数宏定义
│   └── ip/               # IP 核
│       ├── open-la500/   # LA500 CPU 核
│       ├── isp/          # ISP 流水线
│       ├── DVI/ new_DVI/ # DVI 视频输出
│       ├── APB_UART/     # UART 控制器
│       ├── verilog-axi-master/ # AXI Crossbar / DMA
│       └── ...
├── sim-verilator/        # Verilator 仿真环境
│   ├── Makefile
│   ├── sim_main.cpp      # C++ 仿真顶层
│   └── sim_top.v         # 仿真顶层模块
├── sim/                  # 传统仿真文件
├── fpga/                 # FPGA 实现
│   ├── create_project.tcl
│   └── constraints/      # XDC 约束文件
├── sdk/                  # 软件开发套件
│   └── software/
│       ├── bsp/          # 板级支持包
│       └── examples/     # 示例程序
└── doc/                  # 文档
```

## 快速开始

### 依赖

- [Verilator](https://verilator.org/) >= 5.0
- LoongArch32 交叉编译工具链（位于 `sdk/toolchains/`）
- GTKWave（可选，用于波形查看）
- Vivado（FPGA 综合，可选）

### 仿真

```bash
cd sim-verilator

# 编译并运行（默认加载 hello_world，生成 wave.fst 波形）
make run

# 指定程序
make run PROGRAM=isp_test

# 不生成波形（更快）
make fast PROGRAM=coremark

# 编译 + 运行 + 打开 GTKWave
make wave

# 清理构建产物
make clean
```

**环境变量：**

| 变量 | 默认值 | 说明 |
|------|--------|------|
| `PROGRAM` | `hello_world` | 加载的示例程序名 |
| `TRACE` | `1` | 是否生成波形（0 关闭） |
| `TRACE_DEPTH` | `8` | 波形追踪层级深度 |
| `BUILD_SDK` | `1` | 是否自动编译 SDK（0 跳过） |


## 示例程序

| 程序 | 说明 |
|------|------|
| `hello_world` | 串口输出 Hello World |
| `isp_test` | ISP 加速器功能测试 |
| `isp_chat` | TPU 意图模型 + ISP AXI-Lite 配置交互 |
| `coremark` | CoreMark 性能基准测试 |
| `dhrystone` | Dhrystone 性能基准测试 |
| `lenet` | LeNet 神经网络推理演示 |
| `pinball_game` | 弹球游戏（DVI 输出） |
| `loongson_AM` | 抽象计算机（mario小游戏） |
| `int_test` | 中断功能测试 |
| `ciciec_func` | 功能验证测试集 |

## SOC 总线架构

```
CPU (LA500)
    │
    └─ AXI Master
           │
      AXI Crossbar (8 Slave Ports)
       ├── S0: BaseRAM
       ├── S1: 新版 DVI 帧缓冲
       ├── S2: UART / 外设
       ├── S3: 旧版 DVI
       ├── S4: confreg（LED/数码管/按键）
       ├── S5: DMA 配置
       ├── S6: 预留外设
       └── S7: ISP 配置
```


## 软件开发

SDK 使用 LoongArch32 裸机工具链，BSP 提供串口、中断、内存映射等基础支持。

```bash
cd sdk/software/examples/hello_world
make
```

编译产物为 `.bin` 文件，仿真时由 Makefile 自动转换为 MIF 格式加载到 SRAM。

## 寄存器映射

### 地址空间分配

| 基地址 | 大小 | 模块 | 说明 |
|--------|------|------|------|
| `0x1C000000` | 16 MB | SRAM | BaseRAM + ExtRAM |
| `0x1F000000` | 1 MB | UART | 串口控制器 |
| `0x1F100000` | 1 MB | DVI | 视频输出帧缓冲 |
| `0x1F200000` | 1 MB | confreg | 外设控制寄存器（LED/数码管/按键/定时器/中断） |
| `0x1F300000` | 1 MB | DMA | DMA 引擎配置寄存器 |
| `0x1F500000` | 1 MB | ISP | ISP 加速器配置寄存器 |
| `0x11000000` | — | new DVI | 新版 DVI 帧缓冲 |

---

### DMA 寄存器（基地址 `0x1F300000`）

| 偏移 | 寄存器名 | 位域 | 读/写 | 复位值 | 说明 |
|------|----------|------|-------|--------|------|
| `0x00` | `READ_ADDR` | [31:0] | R/W | `0x0` | DMA 读操作源地址 |
| `0x04` | `READ_LEN` | [19:0] | R/W | `0x0` | DMA 读传输长度（字节数，最大 1 MB） |
| `0x08` | `WRITE_ADDR` | [31:0] | R/W | `0x0` | DMA 写操作目标地址 |
| `0x0C` | `WRITE_LEN` | [19:0] | R/W | `0x0` | DMA 写传输长度（字节数，最大 1 MB） |
| `0x10` | `CMD_START` | [1:0] | W | — | bit[0]=1 启动读通道；bit[1]=1 启动写通道（写后硬件自动清零） |
| `0x14` | `STATUS` | [1:0] | R | — | bit[0]=读通道就绪；bit[1]=写通道就绪 |

> 典型用法：先写 `READ_ADDR`/`READ_LEN`/`WRITE_ADDR`/`WRITE_LEN`，再写 `CMD_START=0x3` 同时启动读写。

---

### ISP 寄存器（基地址 `0x1F500000`）

| 偏移 | 寄存器名 | 位域 | 读/写 | 复位值 | 说明 |
|------|----------|------|-------|--------|------|
| `0x00` | `FRAME_START` | [0] | W | — | 写 1 触发一帧处理脉冲，硬件自动清零；读回恒为 0 |
| `0x04` | `ISP_SELECTOR` | [8:0] | R/W | `0x0` | 算法选择，见下方位域说明 |
| `0x08` | `BRIGHTNESS` | [7:0] | R/W | `0x80` | 亮度控制值（0 ~ 255，`0x80` 为直通） |
| `0x0C` | `CONTRAST` | [7:0] | R/W | `0x80` | 对比度控制值（0 ~ 255，`0x80` 为 1.0 倍率） |
| `0x10` | `AWB_R` | [7:0] | R/W | `0x0` | 自动白平衡 R 通道增益 |
| `0x14` | `AWB_G` | [7:0] | R/W | `0x0` | 自动白平衡 G 通道增益 |
| `0x18` | `AWB_B` | [7:0] | R/W | `0x0` | 自动白平衡 B 通道增益 |
| `0x1C` | `WIDTH` | [15:0] | R/W | `0x0` | 输入图像宽度（像素） |
| `0x20` | `HEIGHT` | [15:0] | R/W | `0x0` | 输入图像高度（像素） |

当前交互固件启动时写入 `WIDTH=1920`、`HEIGHT=1080`。`AXI2Video` 已从
ISP 核断开，顶层 direct-video 输入暂时保持空闲；配置寄存器和 TPU
意图推理链路可以先独立验证。

交互软件按类别控制亮度、对比度、滤波（含“降噪”同义词）、锐化、
灰度、Gamma、二值化和边缘检测，不区分具体滤波或锐化实现。明确
关键词由 CPU 先匹配，只有未命中时才调用 TPU 模型。
正式固件保留简短问候、身份介绍和功能说明；“你是什么”等问题会回答
“我是基于龙芯中科的数字图像处理助手”，“你能做什么”等问题会列出
支持的图像操作。其他非 ISP 对话统一识别为 `UNKNOWN`，聊天类不会写入
ISP 寄存器。“原图/恢复”会复位全部
ISP 参数，而“恢复彩色”只关闭灰度相关处理。

`training/` 中提供完整的本地蒸馏流程：Apache-2.0 的
Qwen2.5-1.5B-Instruct 教师通过 Vulkan 使用本机 GPU 生成受类别约束的
中文样本，再经过重复、关键词冲突和语义门禁校验后训练为 98,376 字节的
24 类 Q8.8 学生模型。教师权重和运行时只保存在 `training/` 的忽略目录中，
正式固件构建只读取已经校验的蒸馏数据。

#### `ISP_SELECTOR` 位域（`0x1F500004`）

| 位 | 字段名 | 说明 |
|----|--------|------|
| [8] | `gray_flag` | 0 = 彩色模式；1 = 灰度模式（影响后级滤波和特效行为） |
| [8:7] | `select_gray` | `2'b00/01`=直通，`2'b10`=灰度，`2'b11`=灰度 Gamma 校正 |
| [6:4] | `filter_select` | `3'b000`=直通，`3'b001`=双边滤波选择码（当前实例停用），`3'b010`=均值滤波，`3'b011`=中值滤波（交互软件默认），`3'b100`=高斯滤波（仅灰度模式有效） |
| [3:2] | `sharpen_select` | 锐化算法：`2'b00`=直通，`2'b01`=Sobel 锐化，`2'b10`=Laplacian 锐化，`2'b11`=Robert 锐化 |
| [1:0] | `special_select` | 特效算法（彩色模式：`2'b00`=直通；灰度模式：`2'b01`=二值化，`2'b10`=Sobel 边缘检测） |

---

### confreg 寄存器（基地址 `0x1F200000`）

| 绝对地址 | 寄存器名 | 读/写 | 说明 |
|----------|----------|-------|------|
| `0x1F20F000` | `INT_EN` | R/W | 中断使能，每位对应一路中断源 |
| `0x1F20F004` | `INT_EDGE` | R/W | 中断触发方式：1=边沿触发，0=电平触发 |
| `0x1F20F008` | `INT_POL` | R/W | 中断极性：1=高电平/上升沿有效，0=低电平/下降沿有效 |
| `0x1F20F00C` | `INT_CLR` | W | 写 1 清除对应中断挂起位 |
| `0x1F20F010` | `INT_SET` | W | 写 1 强制置位对应中断（软件触发） |
| `0x1F20F014` | `INT_STATE` | R | 当前中断挂起状态（只读） |
| `0x1F20F100` | `TIMER` | R/W | 系统定时器当前计数值（32 位） |
| `0x1F20F104` | `TIMER_CMP` | R/W | 定时器比较值，计数值达到此值时触发中断 |
| `0x1F20F108` | `TIMER_EN` | R/W | bit[0]=1 启动定时器，0 停止 |
| `0x1F20F200` | `DIGITAL_CTRL` | R/W | 数码管显示控制 |
| `0x1F20F204` | `DIGITAL_DATA` | R/W | 数码管显示数据 |
| `0x1F20F300` | `LED` | R/W | LED 输出，低 16 位有效，写 1 点亮对应 LED |
| `0x1F20F400` | `SWITCH` | R | 32 位拨码开关输入（只读），拨到 ON 时对应位为 1 |
| `0x1F20F500` | `SIMU_FLAG` | R | 仿真标志：仿真时全 1（`0xFFFFFFFF`），实机全 0 |
