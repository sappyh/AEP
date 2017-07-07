// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xzhan_suen.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XZhan_suen_CfgInitialize(XZhan_suen *InstancePtr, XZhan_suen_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Crtl_bus_BaseAddress = ConfigPtr->Crtl_bus_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XZhan_suen_Start(XZhan_suen *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XZhan_suen_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_AP_CTRL) & 0x80;
    XZhan_suen_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_AP_CTRL, Data | 0x01);
}

u32 XZhan_suen_IsDone(XZhan_suen *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XZhan_suen_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XZhan_suen_IsIdle(XZhan_suen *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XZhan_suen_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XZhan_suen_IsReady(XZhan_suen *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XZhan_suen_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XZhan_suen_EnableAutoRestart(XZhan_suen *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZhan_suen_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_AP_CTRL, 0x80);
}

void XZhan_suen_DisableAutoRestart(XZhan_suen *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZhan_suen_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_AP_CTRL, 0);
}

void XZhan_suen_Set_y(XZhan_suen *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZhan_suen_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_Y_DATA, Data);
}

u32 XZhan_suen_Get_y(XZhan_suen *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XZhan_suen_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_Y_DATA);
    return Data;
}

void XZhan_suen_InterruptGlobalEnable(XZhan_suen *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZhan_suen_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_GIE, 1);
}

void XZhan_suen_InterruptGlobalDisable(XZhan_suen *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZhan_suen_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_GIE, 0);
}

void XZhan_suen_InterruptEnable(XZhan_suen *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XZhan_suen_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_IER);
    XZhan_suen_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_IER, Register | Mask);
}

void XZhan_suen_InterruptDisable(XZhan_suen *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XZhan_suen_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_IER);
    XZhan_suen_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_IER, Register & (~Mask));
}

void XZhan_suen_InterruptClear(XZhan_suen *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZhan_suen_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_ISR, Mask);
}

u32 XZhan_suen_InterruptGetEnabled(XZhan_suen *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XZhan_suen_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_IER);
}

u32 XZhan_suen_InterruptGetStatus(XZhan_suen *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XZhan_suen_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZHAN_SUEN_CRTL_BUS_ADDR_ISR);
}
