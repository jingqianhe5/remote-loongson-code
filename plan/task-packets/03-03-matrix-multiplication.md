# Task Packet

- Scope: 编写报告第3.3节“矩阵乘法原理与设计”，覆盖基本结构、TPU专用指令集、基于龙芯自定义指令的CPU通信、梯度计算取舍与现存问题、仿真验证。
- Files to read: `rtl/ip/tpu/tpu.v`、`systolic.v`、`pe.v`、`unified_buffer.sv`、`vpu.v`、`decode.v`、`tpu_axi_fetch_top.v`、`rtl/soc_top.v`、`sim-verilator/tpu_dma_tb.sv`、`chapters/01-03-lacc-custom-instructions.md`。
- Files allowed to edit: `chapters/03-03-matrix-multiplication.md`、`plan/project-overview.md`、`plan/outline.md`、`plan/notes.md`、`plan/progress.md`、本任务包。
- Required skills: `paper-orchestration`、`writing-chapters`、`writing-core`、`verification`。
- Evidence/data inputs: 当前RTL参数和信号定义、`tpu_dma_tb.sv`参考结果、TinyTPU结构参考、本项目Git提交中的训练版设计说明。
- Required artifacts: 一份包含5个三级小节、矩阵公式、结构框图、指令表和仿真项目表的中文Markdown章节。
- Required argument chain: 矩阵分块与数据格式 -> UB供数 -> PE阵列乘累加 -> 结果缩放与饱和 -> 内部微指令调度 -> CPU经LACC和AXI启动任务 -> 推理版删除梯度路径的理由及限制 -> 仿真比较方法与结果。
- Minimum prose length: 5000个非空白字符。
- Prohibited structure: 不将用户要求写入正文；不把训练版梯度功能表述为当前能力；不虚构性能数据；不以项目符号代替正文论证。
- Rejection checks: 5个小节齐全；指令位域与`decode.v`一致；矩阵位宽与`systolic.v`、`pe.v`一致；梯度边界与当前集成顶层一致；仿真结论来自实际执行结果。
- Validation commands: 运行`tpu_dma_tb`；统计字符与标题；扫描禁用表达；运行科研写作风格检查；核对关键RTL常量。
