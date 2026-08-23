# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsim_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsim_top \
	Vsim_top___024root__DepSet_h25cf915e__0 \
	Vsim_top___024root__DepSet_h25cf915e__1 \
	Vsim_top___024root__DepSet_h25cf915e__2 \
	Vsim_top___024root__DepSet_h25cf915e__3 \
	Vsim_top___024root__DepSet_h9a1654b3__0 \
	Vsim_top___024root__DepSet_h9a1654b3__1 \
	Vsim_top___024root__DepSet_h9a1654b3__2 \
	Vsim_top_Axi_CDC__DepSet_h394f86a8__0 \
	Vsim_top_Axi_CDC__DepSet_hcf5e22ce__0 \
	Vsim_top_BoothInterBase__DepSet_h9060f0a2__0 \
	Vsim_top_BoothInterBase__DepSet_h9060f0a2__1 \
	Vsim_top_BoothInterBase__DepSet_h9060f0a2__2 \
	Vsim_top_BoothInterBase__DepSet_h9060f0a2__3 \
	Vsim_top_BoothInterBase__DepSet_h9060f0a2__4 \
	Vsim_top_WallaceTreeBase__DepSet_h97db5c0d__0 \
	Vsim_top_WallaceTreeBase__DepSet_h97db5c0d__1 \
	Vsim_top_WallaceTreeBase__DepSet_h97db5c0d__2 \
	Vsim_top_arbiter__P3_A1_AB1_AD1__DepSet_hde14b48e__0 \
	Vsim_top_arbiter__P3_A1_AB1_AD1__DepSet_h31cb7703__0 \
	Vsim_top_robert_sharpen_single__DepSet_h7fc1a0bd__0 \
	Vsim_top_robert_sharpen_single__DepSet_hd02082d2__0 \
	Vsim_top_sobel_sharpen_single__DepSet_h450a7476__0 \
	Vsim_top_sobel_sharpen_single__DepSet_hbad9379b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsim_top__ConstPool_0 \
	Vsim_top___024root__Slow \
	Vsim_top___024root__DepSet_h25cf915e__0__Slow \
	Vsim_top___024root__DepSet_h25cf915e__1__Slow \
	Vsim_top___024root__DepSet_h25cf915e__2__Slow \
	Vsim_top___024root__DepSet_h25cf915e__3__Slow \
	Vsim_top___024root__DepSet_h9a1654b3__0__Slow \
	Vsim_top_Axi_CDC__Slow \
	Vsim_top_Axi_CDC__DepSet_h394f86a8__0__Slow \
	Vsim_top_Axi_CDC__DepSet_hcf5e22ce__0__Slow \
	Vsim_top_BoothInterBase__Slow \
	Vsim_top_BoothInterBase__DepSet_h03fafcd2__0__Slow \
	Vsim_top_WallaceTreeBase__Slow \
	Vsim_top_WallaceTreeBase__DepSet_h74c814ab__0__Slow \
	Vsim_top_arbiter__P3_A1_AB1_AD1__Slow \
	Vsim_top_arbiter__P3_A1_AB1_AD1__DepSet_hde14b48e__0__Slow \
	Vsim_top_arbiter__P3_A1_AB1_AD1__DepSet_h31cb7703__0__Slow \
	Vsim_top_robert_sharpen_single__Slow \
	Vsim_top_robert_sharpen_single__DepSet_h7fc1a0bd__0__Slow \
	Vsim_top_robert_sharpen_single__DepSet_hd02082d2__0__Slow \
	Vsim_top_sobel_sharpen_single__Slow \
	Vsim_top_sobel_sharpen_single__DepSet_h450a7476__0__Slow \
	Vsim_top_sobel_sharpen_single__DepSet_hbad9379b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsim_top__Trace__0 \
	Vsim_top__Trace__1 \
	Vsim_top__Trace__2 \
	Vsim_top__Trace__3 \
	Vsim_top__Trace__4 \
	Vsim_top__Trace__5 \
	Vsim_top__Trace__6 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsim_top__Syms \
	Vsim_top__Trace__0__Slow \
	Vsim_top__Trace__1__Slow \
	Vsim_top__Trace__2__Slow \
	Vsim_top__Trace__3__Slow \
	Vsim_top__Trace__4__Slow \
	Vsim_top__Trace__5__Slow \
	Vsim_top__Trace__6__Slow \
	Vsim_top__Trace__7__Slow \
	Vsim_top__Trace__8__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_fst_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
