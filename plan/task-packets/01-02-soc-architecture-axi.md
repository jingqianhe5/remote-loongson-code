## Task Packet

- Scope: 撰写第1章的1.1 SoC整体架构和1.2 AXI互连与地址空间，承接后续1.3 LACC自定义指令设计。
- Stage: S4 Drafting，工程方法章节。
- Files to read: `rtl/soc_top.v`、`rtl/ip/PLL_2019_2/clk_pll.xci`、`rtl/ip/verilog-axi-master/rtl/AXI_top.v`、`chapters/01-03-lacc-custom-instructions.md`、`plan/project-overview.md`、`plan/outline.md`、`plan/notes.md`。
- Files allowed to edit: `chapters/01-02-soc-architecture-and-axi.md`、`plan/project-overview.md`、`plan/outline.md`、`plan/progress.md`、`plan/notes.md`、本任务包。
- Required skills: `paper-orchestration`、`writing-chapters`、`writing-core`、`verification`。
- Evidence/data inputs: 当前RTL中的3个AXI发起端、8个目标端口、地址窗口、3个时钟域、2条AXI CDC路径、双异步FIFO和TPU只读AXI主接口。
- Required artifacts: 1.1与1.2连续正文、SoC架构框图、主设备说明表、时钟域表、地址映射表。
- Required argument chain: 应用目标与模块分工 -> 三主设备共享互连 -> 控制面和数据面分离 -> 三时钟域及跨域处理 -> Crossbar地址译码和仲裁 -> 地址空间与接口适配 -> 向1.3过渡。
- Minimum prose length: 3500个字符，不含任务记录。
- Prohibited structure: 不把正文写成模块清单；不保留截图中的旧版“两时钟域、七从设备”描述；不声称尚未接通的ISP视频输入已经形成完整实时链路；不编造性能数据。
- Rejection checks: 与`S_COUNT=3`、`M_COUNT=8`及地址参数不一致；混淆CPU/TPU专用FIFO与AXI批量数据路径；将预留M6写成已实现FFT；使用低清图片替代表格；出现过程性说明。
- Validation commands: 字符统计、标题与表格结构检查、RTL关键字段对照、`style_check.sh`、`git diff --check`。

