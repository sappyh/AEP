// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef XZHAN_SUEN_H
#define XZHAN_SUEN_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xzhan_suen_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Crtl_bus_BaseAddress;
} XZhan_suen_Config;
#endif

typedef struct {
    u32 Crtl_bus_BaseAddress;
    u32 IsReady;
} XZhan_suen;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XZhan_suen_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XZhan_suen_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XZhan_suen_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XZhan_suen_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XZhan_suen_Initialize(XZhan_suen *InstancePtr, u16 DeviceId);
XZhan_suen_Config* XZhan_suen_LookupConfig(u16 DeviceId);
int XZhan_suen_CfgInitialize(XZhan_suen *InstancePtr, XZhan_suen_Config *ConfigPtr);
#else
int XZhan_suen_Initialize(XZhan_suen *InstancePtr, const char* InstanceName);
int XZhan_suen_Release(XZhan_suen *InstancePtr);
#endif

void XZhan_suen_Start(XZhan_suen *InstancePtr);
u32 XZhan_suen_IsDone(XZhan_suen *InstancePtr);
u32 XZhan_suen_IsIdle(XZhan_suen *InstancePtr);
u32 XZhan_suen_IsReady(XZhan_suen *InstancePtr);
void XZhan_suen_EnableAutoRestart(XZhan_suen *InstancePtr);
void XZhan_suen_DisableAutoRestart(XZhan_suen *InstancePtr);

void XZhan_suen_Set_y(XZhan_suen *InstancePtr, u32 Data);
u32 XZhan_suen_Get_y(XZhan_suen *InstancePtr);

void XZhan_suen_InterruptGlobalEnable(XZhan_suen *InstancePtr);
void XZhan_suen_InterruptGlobalDisable(XZhan_suen *InstancePtr);
void XZhan_suen_InterruptEnable(XZhan_suen *InstancePtr, u32 Mask);
void XZhan_suen_InterruptDisable(XZhan_suen *InstancePtr, u32 Mask);
void XZhan_suen_InterruptClear(XZhan_suen *InstancePtr, u32 Mask);
u32 XZhan_suen_InterruptGetEnabled(XZhan_suen *InstancePtr);
u32 XZhan_suen_InterruptGetStatus(XZhan_suen *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif