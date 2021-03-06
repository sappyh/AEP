// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xzhan_suen.h"

extern XZhan_suen_Config XZhan_suen_ConfigTable[];

XZhan_suen_Config *XZhan_suen_LookupConfig(u16 DeviceId) {
	XZhan_suen_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XZHAN_SUEN_NUM_INSTANCES; Index++) {
		if (XZhan_suen_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XZhan_suen_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XZhan_suen_Initialize(XZhan_suen *InstancePtr, u16 DeviceId) {
	XZhan_suen_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XZhan_suen_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XZhan_suen_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

