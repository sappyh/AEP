// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#1 "/home/ubuntu-admin/SharedFolder/EIT_Studies/TUB_Docs/Sem2/EmbProj/GitHub/AEP/HLS/bram_interface/core.cpp"
#1 "<built-in>"
#1 "<command-line>"
#1 "/home/ubuntu-admin/SharedFolder/EIT_Studies/TUB_Docs/Sem2/EmbProj/GitHub/AEP/HLS/bram_interface/core.cpp"



#ifndef HLS_FASTSIM
#include "apatb_zhan_suen.h"
#endif
#define zhan_suen(...) AESL_ORIG_DUT_zhan_suen(__VA_ARGS__)
#3 "/home/ubuntu-admin/SharedFolder/EIT_Studies/TUB_Docs/Sem2/EmbProj/GitHub/AEP/HLS/bram_interface/core.cpp"
void zhan_suen(int input[100], int result[100], int y) {
#pragma HLS INTERFACE bram port=result
#pragma HLS INTERFACE bram port=input
#pragma HLS INTERFACE s_axilite port=return bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=y bundle=CRTL_BUS

 for(int i = 0 ; i < 100 ; i++) {
  result[i] = input[i] * y;
 }


}
#undef zhan_suen

#14 "/home/ubuntu-admin/SharedFolder/EIT_Studies/TUB_Docs/Sem2/EmbProj/GitHub/AEP/HLS/bram_interface/core.cpp"
