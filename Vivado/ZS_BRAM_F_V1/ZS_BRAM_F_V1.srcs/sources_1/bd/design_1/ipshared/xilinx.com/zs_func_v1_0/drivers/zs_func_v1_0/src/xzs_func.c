// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xzs_func.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XZs_func_CfgInitialize(XZs_func *InstancePtr, XZs_func_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Crtl_bus_BaseAddress = ConfigPtr->Crtl_bus_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XZs_func_Start(XZs_func *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XZs_func_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_AP_CTRL) & 0x80;
    XZs_func_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_AP_CTRL, Data | 0x01);
}

u32 XZs_func_IsDone(XZs_func *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XZs_func_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XZs_func_IsIdle(XZs_func *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XZs_func_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XZs_func_IsReady(XZs_func *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XZs_func_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XZs_func_EnableAutoRestart(XZs_func *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZs_func_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_AP_CTRL, 0x80);
}

void XZs_func_DisableAutoRestart(XZs_func *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZs_func_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_AP_CTRL, 0);
}

u32 XZs_func_Get_return(XZs_func *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XZs_func_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_AP_RETURN);
    return Data;
}
void XZs_func_InterruptGlobalEnable(XZs_func *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZs_func_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_GIE, 1);
}

void XZs_func_InterruptGlobalDisable(XZs_func *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZs_func_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_GIE, 0);
}

void XZs_func_InterruptEnable(XZs_func *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XZs_func_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_IER);
    XZs_func_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_IER, Register | Mask);
}

void XZs_func_InterruptDisable(XZs_func *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XZs_func_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_IER);
    XZs_func_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_IER, Register & (~Mask));
}

void XZs_func_InterruptClear(XZs_func *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XZs_func_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_ISR, Mask);
}

u32 XZs_func_InterruptGetEnabled(XZs_func *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XZs_func_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_IER);
}

u32 XZs_func_InterruptGetStatus(XZs_func *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XZs_func_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XZS_FUNC_CRTL_BUS_ADDR_ISR);
}

