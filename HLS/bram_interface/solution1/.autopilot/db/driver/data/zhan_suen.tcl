# ==============================================================
# File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
# Version: 2015.4
# Copyright (C) 2015 Xilinx Inc. All rights reserved.
# 
# ==============================================================

proc generate {drv_handle} {
    xdefine_include_file $drv_handle "xparameters.h" "XZhan_suen" \
        "NUM_INSTANCES" \
        "DEVICE_ID" \
        "C_S_AXI_CRTL_BUS_BASEADDR" \
        "C_S_AXI_CRTL_BUS_HIGHADDR"

    xdefine_config_file $drv_handle "xzhan_suen_g.c" "XZhan_suen" \
        "DEVICE_ID" \
        "C_S_AXI_CRTL_BUS_BASEADDR"

    xdefine_canonical_xpars $drv_handle "xparameters.h" "XZhan_suen" \
        "DEVICE_ID" \
        "C_S_AXI_CRTL_BUS_BASEADDR" \
        "C_S_AXI_CRTL_BUS_HIGHADDR"
}

