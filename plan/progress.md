# 写作进度

## 2026-07-17 - 3.3 矩阵乘法原理与设计

- 状态：初稿完成，待用户确认。
- 阶段：S4 Drafting，已完成S5 Review。
- 输出文件：`chapters/03-03-matrix-multiplication.md`。
- 章节规模：8261个字符、145行，包含3.3.1至3.3.5五个小节、2幅文本框图、2张技术表和2个矩阵/乘累加公式。
- 规范合规检查：五项用户要求均已覆盖；章节结构、标题层级、指令字段和最小正文长度通过；正文无项目符号堆砌或虚构性能数据。
- 质量检查：已区分TinyTPU参考训练结构与当前推理版实现；无机械过渡词、空壳强调句、主观表达和无意义强调；图表代码块中的连续行经人工复核为预期格式。
- RTL对照：8×8阵列、2048×16位八银行UB、Q8.8输入/权重、Q16.16乘积、32位累加、输出舍入饱和、7类推理微指令、LACC/AXI两级控制及训练兼容端口均与当前RTL一致。
- 仿真结果：`make tpu-test`通过，输出为`[tpu_dma_tb] PASS dma_beats=2016 overlap_cycles=329 instruction_reads=120 math_results=64`。
- 用户确认：否。

### Capability-use audit

- Required skills: `paper-orchestration`、`writing-chapters`、`writing-core`、`verification`。
- Skills actually used: `paper-orchestration`、`brainstorming-research`（复核既有项目范围）、`writing-chapters`、`writing-core`、`verification`。
- Inputs consumed: 全部既有计划文件、1.3节LACC正文、`tpu.v`、`systolic.v`、`pe.v`、`unified_buffer.sv`、`vpu.v`、`decode.v`、`tpu_axi_fetch_top.v`、`soc_top.v`、`tpu_dma_tb.sv`、TPU引入提交中的训练版README，以及TinyTPU公开仓库检索结果。
- Inputs not used and why: 未把旧XOR训练与外部梯度测试数据写入正文，因为当前SoC综合路径不支持梯度计算；未引用TinyTPU的性能数字，因为其实现语言、规模和本项目RTL不同，不能形成可比结论。
- Artifacts produced: `chapters/03-03-matrix-multiplication.md`、`plan/task-packets/03-03-matrix-multiplication.md`，并更新项目概览、大纲、写作说明和进度记录。
- Verification run: `make tpu-test`、字符与标题统计、禁用表达扫描、风格检查、关键RTL常量和操作码对照、限定文件尾随空格检查。
- Remaining risk: 尚缺上板矩阵计算的周期、频率和资源利用率数据；非8倍数矩阵、32位累加溢出上报和增加DSP流水级后的对齐仍需补充验证；最终汇总报告时需统一第3章图表编号。

## 2026-07-16

- 已确认报告类型、技术方向、项目名称、设计目的和验证方法。
- 已确认 1.3 节内容结构。
- 1.3 节正文：初稿完成，已通过结构、字段对照和写作风格检查，待用户确认。

## 2026-07-16 - 1.1 SoC整体架构与1.2 AXI互连

- 状态：初稿完成，待用户确认。
- 阶段：S4 Drafting。
- 输出文件：`chapters/01-02-soc-architecture-and-axi.md`。
- 章节规模：6263个字符、107行，包含6个三级小节、1张架构框图和3张技术表。
- 规范合规检查：标题层级、正文长度、地址表和章节衔接通过；正文无引用需求和虚构数据。
- 质量检查：无机械过渡词、空壳强调句、主观表达或正文列表化；文本框图中的虚线被风格脚本识别为列表，人工复核后确认属于代码块内容。
- RTL对照：3个AXI发起端、8个目标窗口、4位输入ID与6位目标侧ID、三时钟域、两条AXI CDC、双异步FIFO、TPU只读主接口和地址范围均已核对。
- 用户确认：否。

### Capability-use audit

- Required skills: `paper-orchestration`、`writing-chapters`、`writing-core`、`verification`。
- Skills actually used: `paper-orchestration`、`writing-chapters`、`writing-core`、`verification`；架构图采用Markdown文本框图，参考了`figures-diagram`的元素与关系检查要求，未调用图像生成。
- Inputs consumed: `rtl/soc_top.v`、`rtl/ip/PLL_2019_2/clk_pll.xci`、`rtl/ip/tpu/tpu_axi_fetch_top.v`、`rtl/ip/verilog-axi-master/rtl/AXI_top.v`、AXI Crossbar仲裁RTL、现有1.3章节和全部项目计划文件。
- Inputs not used and why: 未使用外部文献，两个小节描述的是本项目RTL实现，不包含需要文献支撑的相关工作或性能对比；未使用截图中的旧架构数据，因为已经与当前RTL不一致。
- Artifacts produced: `chapters/01-02-soc-architecture-and-axi.md`、`plan/task-packets/01-02-soc-architecture-axi.md`，并更新项目概览、大纲、写作说明和进度记录。
- Verification run: 字符与标题统计、禁用表达扫描、地址参数对照、时钟频率对照、TPU读写通道对照、风格检查、限定文件的尾随空格检查。
- Remaining risk: 最终合并第1章时需统一1.1至1.3的图表编号；ISP直接视频输入接通后应按新版顶层更新相关描述。

## 2026-07-18 - 3.4 DMA设计、AM移植与《超级马里奥》运行

- 状态：已按竞赛报告结构重写，待用户确认。
- 阶段：S4 Drafting，已完成重写后的规范与质量检查。
- 输出文件：`chapters/03-04-dma-am-mario.md`。
- 内容覆盖：DMA基本原理、AXI读写与反压、SoC总线和寄存器、视频帧搬运、AM LoongArch SoC适配、FCEUX/Mario ROM构建及分层验证。
- 证据来源：`rtl/soc_top.v`、`rtl/ip/dma_config_axil.v`、`sdk/software/examples/loongson_AM/am/src/loongarch/soc/{trm.c,ioe.c}`、`sdk/software/examples/loongson_AM/fceux-am/{Makefile,README.md}`。
- Capability-use audit：已使用`using-research-writing`、`brainstorming-research`流程要求；未引入外部文献，因本章是基于仓库RTL和软件实现的工程报告；未使用LaTeX模板。
- 修正内容：明确默认新版DVI由CPU直写帧缓冲，DMA刷新属于旧DVI兼容路径；确认当前AM输入返回`AM_KEY_NONE`，不再将键位映射描述成已经可交互。
- 验证命令：完成`wc -m -l`、标题层级扫描、禁用表达扫描、`git diff --check`、写作风格脚本和RTL/AM关键常量对照；代码块连续行提示属于框图、公式和命令示例的预期格式。

## 1.3节验证记录

- 章节规模：6514个字符、133行。
- 章节结构：包含1.3.1至1.3.6六个小节和4张定义表。
- RTL对照：LACC四类主命令、四类FIFO命令、4个立即数子操作、状态字和64×16位结果缓冲均与当前`lacc_core.v`一致。
- 软件对照：7个机器码与`runc/run.c`当前定义一致。
- 风格检查：无禁用过渡词、主观表达、正文项目符号或无意义强调。
- 剩余工作：加入RTL仿真波形、上板数据和量化指标后形成终稿。
- RTL复核发现：`lacc_flush`在执行级中已声明并连接，但当前未发现驱动赋值；正文已改为说明设计意图和待补充项。

## 2026-07-18 - ISP与DMA总线寄存器说明

- 状态：初稿完成，待用户确认。
- 输出文件：`chapters/03-05-isp-dma-register-map.md`。
- 内容覆盖：DMA/ISP总线窗口、CPU非缓存地址、寄存器偏移、DMA状态位、ISP selector编码、配置示例和实现边界。
- RTL依据：`rtl/soc_top.v`、增强版与简化版`dma_config_axil.v`、`rtl/ip/isp_config_axil.v`及ISP各级选择器。
- Capability-use audit：使用`using-research-writing`、`writing-chapters`、`writing-core`和`verification`；未使用外部文献，因为寄存器定义完全由仓库RTL决定。
- 剩余风险：DMA同名模块仍需在工程源列表中消除重复；ISP实际视频输入尚未在顶层接通。

## 2026-07-18 - TPU原理与SoC实现

- 状态：详细初稿完成，已通过规范、RTL对照和功能仿真，待用户确认。
- 输出文件：`chapters/03-06-tpu-principle-and-design.md`。
- 内容覆盖：矩阵乘法、Q8.8定点、PE、8×8脉动阵列、UB、VPU、微指令、AXI取指/DMA、LACC协同、算子映射和验证边界。
- RTL依据：`pe.v`、`systolic.v`、`unified_buffer.sv`、`vpu.v`、`decode.v`、`tpu.v`、`tpu_axi_fetch_top.v`、`soc_top.v`和LACC控制通路。
- Capability-use audit：使用`using-research-writing`、`writing-chapters`、`writing-core`和`verification`；未引入外部文献，因正文以当前仓库RTL实现为证据；未把训练版遗留模块写成当前功能。
- 验证结果：文件共9569个字符、218行、11个小节；禁用表达、正文列表化、主观用语和`git diff --check`均通过；文本框图与公式的连续行提示经人工复核为预期格式。
- 功能仿真：在`sim-verilator`执行`make tpu-test`通过，输出`dma_beats=2016`、`overlap_cycles=329`、`instruction_reads=120`、`math_results=64`。
- 剩余风险：尚缺板级频率、资源利用率、真实模型周期和CPU软件基线，不能据64个PE直接给出实测加速比。
- 用户反馈修改：正文改为竞赛作品介绍语气，减少审查式、否定式结论；标题调整为“基于LA500 SoC的TPU矩阵加速器设计”。
- 原理扩写：增加矩阵三层循环的硬件展开、8×8微块输入/权重复用、权重驻留、局部互连、空间并行、时间流水，以及TinyTPU到本作品的阵列、AXI和LACC三项改造。
- 修改后检查：正文10582个字符、228行，11个小节；风格脚本、禁用表达扫描和`git diff --check`通过，原有`make tpu-test`功能结果保持有效。
