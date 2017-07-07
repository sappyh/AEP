// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "zhan_suen.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic zhan_suen::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic zhan_suen::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<10> zhan_suen::ap_ST_st1_fsm_0 = "1";
const sc_lv<10> zhan_suen::ap_ST_st2_fsm_1 = "10";
const sc_lv<10> zhan_suen::ap_ST_st3_fsm_2 = "100";
const sc_lv<10> zhan_suen::ap_ST_st4_fsm_3 = "1000";
const sc_lv<10> zhan_suen::ap_ST_st5_fsm_4 = "10000";
const sc_lv<10> zhan_suen::ap_ST_st6_fsm_5 = "100000";
const sc_lv<10> zhan_suen::ap_ST_st7_fsm_6 = "1000000";
const sc_lv<10> zhan_suen::ap_ST_st8_fsm_7 = "10000000";
const sc_lv<10> zhan_suen::ap_ST_st9_fsm_8 = "100000000";
const sc_lv<10> zhan_suen::ap_ST_st10_fsm_9 = "1000000000";
const sc_lv<32> zhan_suen::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> zhan_suen::ap_const_lv1_1 = "1";
const int zhan_suen::C_S_AXI_DATA_WIDTH = "100000";
const sc_lv<32> zhan_suen::ap_const_lv32_1 = "1";
const sc_lv<1> zhan_suen::ap_const_lv1_0 = "0";
const sc_lv<32> zhan_suen::ap_const_lv32_2 = "10";
const sc_lv<32> zhan_suen::ap_const_lv32_8 = "1000";
const sc_lv<7> zhan_suen::ap_const_lv7_0 = "0000000";
const sc_lv<32> zhan_suen::ap_const_lv32_9 = "1001";
const sc_lv<4> zhan_suen::ap_const_lv4_0 = "0000";
const sc_lv<4> zhan_suen::ap_const_lv4_F = "1111";
const sc_lv<7> zhan_suen::ap_const_lv7_64 = "1100100";
const sc_lv<7> zhan_suen::ap_const_lv7_1 = "1";

zhan_suen::zhan_suen(sc_module_name name) : sc_module(name), mVcdFile(0) {
    zhan_suen_CRTL_BUS_s_axi_U = new zhan_suen_CRTL_BUS_s_axi<C_S_AXI_CRTL_BUS_ADDR_WIDTH,C_S_AXI_CRTL_BUS_DATA_WIDTH>("zhan_suen_CRTL_BUS_s_axi_U");
    zhan_suen_CRTL_BUS_s_axi_U->AWVALID(s_axi_CRTL_BUS_AWVALID);
    zhan_suen_CRTL_BUS_s_axi_U->AWREADY(s_axi_CRTL_BUS_AWREADY);
    zhan_suen_CRTL_BUS_s_axi_U->AWADDR(s_axi_CRTL_BUS_AWADDR);
    zhan_suen_CRTL_BUS_s_axi_U->WVALID(s_axi_CRTL_BUS_WVALID);
    zhan_suen_CRTL_BUS_s_axi_U->WREADY(s_axi_CRTL_BUS_WREADY);
    zhan_suen_CRTL_BUS_s_axi_U->WDATA(s_axi_CRTL_BUS_WDATA);
    zhan_suen_CRTL_BUS_s_axi_U->WSTRB(s_axi_CRTL_BUS_WSTRB);
    zhan_suen_CRTL_BUS_s_axi_U->ARVALID(s_axi_CRTL_BUS_ARVALID);
    zhan_suen_CRTL_BUS_s_axi_U->ARREADY(s_axi_CRTL_BUS_ARREADY);
    zhan_suen_CRTL_BUS_s_axi_U->ARADDR(s_axi_CRTL_BUS_ARADDR);
    zhan_suen_CRTL_BUS_s_axi_U->RVALID(s_axi_CRTL_BUS_RVALID);
    zhan_suen_CRTL_BUS_s_axi_U->RREADY(s_axi_CRTL_BUS_RREADY);
    zhan_suen_CRTL_BUS_s_axi_U->RDATA(s_axi_CRTL_BUS_RDATA);
    zhan_suen_CRTL_BUS_s_axi_U->RRESP(s_axi_CRTL_BUS_RRESP);
    zhan_suen_CRTL_BUS_s_axi_U->BVALID(s_axi_CRTL_BUS_BVALID);
    zhan_suen_CRTL_BUS_s_axi_U->BREADY(s_axi_CRTL_BUS_BREADY);
    zhan_suen_CRTL_BUS_s_axi_U->BRESP(s_axi_CRTL_BUS_BRESP);
    zhan_suen_CRTL_BUS_s_axi_U->ACLK(ap_clk);
    zhan_suen_CRTL_BUS_s_axi_U->ARESET(ap_rst_n_inv);
    zhan_suen_CRTL_BUS_s_axi_U->ACLK_EN(zhan_suen_CRTL_BUS_s_axi_U_ap_dummy_ce);
    zhan_suen_CRTL_BUS_s_axi_U->ap_start(ap_start);
    zhan_suen_CRTL_BUS_s_axi_U->interrupt(interrupt);
    zhan_suen_CRTL_BUS_s_axi_U->ap_ready(ap_ready);
    zhan_suen_CRTL_BUS_s_axi_U->ap_done(ap_done);
    zhan_suen_CRTL_BUS_s_axi_U->ap_idle(ap_idle);
    zhan_suen_CRTL_BUS_s_axi_U->y(y);
    zhan_suen_mul_32s_32s_32_6_U1 = new zhan_suen_mul_32s_32s_32_6<1,6,32,32,32>("zhan_suen_mul_32s_32s_32_6_U1");
    zhan_suen_mul_32s_32s_32_6_U1->clk(ap_clk);
    zhan_suen_mul_32s_32s_32_6_U1->reset(ap_rst_n_inv);
    zhan_suen_mul_32s_32s_32_6_U1->din0(input_load_reg_123);
    zhan_suen_mul_32s_32s_32_6_U1->din1(y_read_reg_100);
    zhan_suen_mul_32s_32s_32_6_U1->ce(grp_fu_96_ce);
    zhan_suen_mul_32s_32s_32_6_U1->dout(grp_fu_96_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( exitcond_fu_79_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( exitcond_fu_79_p2 );

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_ap_sig_bdd_104);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_120);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_129);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_139);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_28);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_cseq_ST_st10_fsm_9);
    sensitive << ( ap_sig_bdd_139 );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_28 );

    SC_METHOD(thread_ap_sig_cseq_ST_st2_fsm_1);
    sensitive << ( ap_sig_bdd_104 );

    SC_METHOD(thread_ap_sig_cseq_ST_st3_fsm_2);
    sensitive << ( ap_sig_bdd_120 );

    SC_METHOD(thread_ap_sig_cseq_ST_st9_fsm_8);
    sensitive << ( ap_sig_bdd_129 );

    SC_METHOD(thread_exitcond_fu_79_p2);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( i_reg_68 );

    SC_METHOD(thread_grp_fu_96_ce);

    SC_METHOD(thread_i_1_fu_85_p2);
    sensitive << ( i_reg_68 );

    SC_METHOD(thread_input_r_Addr_A);
    sensitive << ( input_r_Addr_A_orig );

    SC_METHOD(thread_input_r_Addr_A_orig);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( tmp_fu_91_p1 );

    SC_METHOD(thread_input_r_Clk_A);
    sensitive << ( ap_clk );

    SC_METHOD(thread_input_r_Din_A);

    SC_METHOD(thread_input_r_EN_A);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_input_r_Rst_A);
    sensitive << ( ap_rst_n_inv );

    SC_METHOD(thread_input_r_WEN_A);

    SC_METHOD(thread_result_Addr_A);
    sensitive << ( result_Addr_A_orig );

    SC_METHOD(thread_result_Addr_A_orig);
    sensitive << ( tmp_reg_113 );
    sensitive << ( ap_sig_cseq_ST_st10_fsm_9 );

    SC_METHOD(thread_result_Clk_A);
    sensitive << ( ap_clk );

    SC_METHOD(thread_result_Din_A);
    sensitive << ( tmp_1_reg_128 );
    sensitive << ( ap_sig_cseq_ST_st10_fsm_9 );

    SC_METHOD(thread_result_EN_A);
    sensitive << ( ap_sig_cseq_ST_st10_fsm_9 );

    SC_METHOD(thread_result_Rst_A);
    sensitive << ( ap_rst_n_inv );

    SC_METHOD(thread_result_WEN_A);
    sensitive << ( ap_sig_cseq_ST_st10_fsm_9 );

    SC_METHOD(thread_tmp_fu_91_p1);
    sensitive << ( i_reg_68 );

    SC_METHOD(thread_zhan_suen_CRTL_BUS_s_axi_U_ap_dummy_ce);

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_fu_79_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "zhan_suen_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, input_r_Addr_A, "(port)input_r_Addr_A");
    sc_trace(mVcdFile, input_r_EN_A, "(port)input_r_EN_A");
    sc_trace(mVcdFile, input_r_WEN_A, "(port)input_r_WEN_A");
    sc_trace(mVcdFile, input_r_Din_A, "(port)input_r_Din_A");
    sc_trace(mVcdFile, input_r_Dout_A, "(port)input_r_Dout_A");
    sc_trace(mVcdFile, input_r_Clk_A, "(port)input_r_Clk_A");
    sc_trace(mVcdFile, input_r_Rst_A, "(port)input_r_Rst_A");
    sc_trace(mVcdFile, result_Addr_A, "(port)result_Addr_A");
    sc_trace(mVcdFile, result_EN_A, "(port)result_EN_A");
    sc_trace(mVcdFile, result_WEN_A, "(port)result_WEN_A");
    sc_trace(mVcdFile, result_Din_A, "(port)result_Din_A");
    sc_trace(mVcdFile, result_Dout_A, "(port)result_Dout_A");
    sc_trace(mVcdFile, result_Clk_A, "(port)result_Clk_A");
    sc_trace(mVcdFile, result_Rst_A, "(port)result_Rst_A");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_AWVALID, "(port)s_axi_CRTL_BUS_AWVALID");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_AWREADY, "(port)s_axi_CRTL_BUS_AWREADY");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_AWADDR, "(port)s_axi_CRTL_BUS_AWADDR");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_WVALID, "(port)s_axi_CRTL_BUS_WVALID");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_WREADY, "(port)s_axi_CRTL_BUS_WREADY");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_WDATA, "(port)s_axi_CRTL_BUS_WDATA");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_WSTRB, "(port)s_axi_CRTL_BUS_WSTRB");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_ARVALID, "(port)s_axi_CRTL_BUS_ARVALID");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_ARREADY, "(port)s_axi_CRTL_BUS_ARREADY");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_ARADDR, "(port)s_axi_CRTL_BUS_ARADDR");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_RVALID, "(port)s_axi_CRTL_BUS_RVALID");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_RREADY, "(port)s_axi_CRTL_BUS_RREADY");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_RDATA, "(port)s_axi_CRTL_BUS_RDATA");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_RRESP, "(port)s_axi_CRTL_BUS_RRESP");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_BVALID, "(port)s_axi_CRTL_BUS_BVALID");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_BREADY, "(port)s_axi_CRTL_BUS_BREADY");
    sc_trace(mVcdFile, s_axi_CRTL_BUS_BRESP, "(port)s_axi_CRTL_BUS_BRESP");
    sc_trace(mVcdFile, interrupt, "(port)interrupt");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, ap_start, "ap_start");
    sc_trace(mVcdFile, ap_done, "ap_done");
    sc_trace(mVcdFile, ap_idle, "ap_idle");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_28, "ap_sig_bdd_28");
    sc_trace(mVcdFile, ap_ready, "ap_ready");
    sc_trace(mVcdFile, y, "y");
    sc_trace(mVcdFile, zhan_suen_CRTL_BUS_s_axi_U_ap_dummy_ce, "zhan_suen_CRTL_BUS_s_axi_U_ap_dummy_ce");
    sc_trace(mVcdFile, y_read_reg_100, "y_read_reg_100");
    sc_trace(mVcdFile, i_1_fu_85_p2, "i_1_fu_85_p2");
    sc_trace(mVcdFile, i_1_reg_108, "i_1_reg_108");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st2_fsm_1, "ap_sig_cseq_ST_st2_fsm_1");
    sc_trace(mVcdFile, ap_sig_bdd_104, "ap_sig_bdd_104");
    sc_trace(mVcdFile, tmp_fu_91_p1, "tmp_fu_91_p1");
    sc_trace(mVcdFile, tmp_reg_113, "tmp_reg_113");
    sc_trace(mVcdFile, exitcond_fu_79_p2, "exitcond_fu_79_p2");
    sc_trace(mVcdFile, input_load_reg_123, "input_load_reg_123");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st3_fsm_2, "ap_sig_cseq_ST_st3_fsm_2");
    sc_trace(mVcdFile, ap_sig_bdd_120, "ap_sig_bdd_120");
    sc_trace(mVcdFile, grp_fu_96_p2, "grp_fu_96_p2");
    sc_trace(mVcdFile, tmp_1_reg_128, "tmp_1_reg_128");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st9_fsm_8, "ap_sig_cseq_ST_st9_fsm_8");
    sc_trace(mVcdFile, ap_sig_bdd_129, "ap_sig_bdd_129");
    sc_trace(mVcdFile, i_reg_68, "i_reg_68");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st10_fsm_9, "ap_sig_cseq_ST_st10_fsm_9");
    sc_trace(mVcdFile, ap_sig_bdd_139, "ap_sig_bdd_139");
    sc_trace(mVcdFile, input_r_Addr_A_orig, "input_r_Addr_A_orig");
    sc_trace(mVcdFile, result_Addr_A_orig, "result_Addr_A_orig");
    sc_trace(mVcdFile, grp_fu_96_ce, "grp_fu_96_ce");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("zhan_suen.hdltvin.dat");
    mHdltvoutHandle.open("zhan_suen.hdltvout.dat");
}

zhan_suen::~zhan_suen() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete zhan_suen_CRTL_BUS_s_axi_U;
    delete zhan_suen_mul_32s_32s_32_6_U1;
}

void zhan_suen::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st10_fsm_9.read())) {
        i_reg_68 = i_1_reg_108.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        i_reg_68 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        i_1_reg_108 = i_1_fu_85_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        input_load_reg_123 = input_r_Dout_A.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st9_fsm_8.read())) {
        tmp_1_reg_128 = grp_fu_96_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && esl_seteq<1,1,1>(exitcond_fu_79_p2.read(), ap_const_lv1_0))) {
        tmp_reg_113 = tmp_fu_91_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        y_read_reg_100 = y.read();
    }
}

void zhan_suen::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         !esl_seteq<1,1,1>(exitcond_fu_79_p2.read(), ap_const_lv1_0))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void zhan_suen::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void zhan_suen::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         !esl_seteq<1,1,1>(exitcond_fu_79_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void zhan_suen::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void zhan_suen::thread_ap_sig_bdd_104() {
    ap_sig_bdd_104 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void zhan_suen::thread_ap_sig_bdd_120() {
    ap_sig_bdd_120 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void zhan_suen::thread_ap_sig_bdd_129() {
    ap_sig_bdd_129 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(8, 8));
}

void zhan_suen::thread_ap_sig_bdd_139() {
    ap_sig_bdd_139 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(9, 9));
}

void zhan_suen::thread_ap_sig_bdd_28() {
    ap_sig_bdd_28 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void zhan_suen::thread_ap_sig_cseq_ST_st10_fsm_9() {
    if (ap_sig_bdd_139.read()) {
        ap_sig_cseq_ST_st10_fsm_9 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st10_fsm_9 = ap_const_logic_0;
    }
}

void zhan_suen::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_28.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void zhan_suen::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_bdd_104.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void zhan_suen::thread_ap_sig_cseq_ST_st3_fsm_2() {
    if (ap_sig_bdd_120.read()) {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    }
}

void zhan_suen::thread_ap_sig_cseq_ST_st9_fsm_8() {
    if (ap_sig_bdd_129.read()) {
        ap_sig_cseq_ST_st9_fsm_8 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st9_fsm_8 = ap_const_logic_0;
    }
}

void zhan_suen::thread_exitcond_fu_79_p2() {
    exitcond_fu_79_p2 = (!i_reg_68.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_68.read() == ap_const_lv7_64);
}

void zhan_suen::thread_grp_fu_96_ce() {
    grp_fu_96_ce = ap_const_logic_1;
}

void zhan_suen::thread_i_1_fu_85_p2() {
    i_1_fu_85_p2 = (!i_reg_68.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_reg_68.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void zhan_suen::thread_input_r_Addr_A() {
    input_r_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): input_r_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void zhan_suen::thread_input_r_Addr_A_orig() {
    input_r_Addr_A_orig =  (sc_lv<32>) (tmp_fu_91_p1.read());
}

void zhan_suen::thread_input_r_Clk_A() {
    input_r_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void zhan_suen::thread_input_r_Din_A() {
    input_r_Din_A = ap_const_lv32_0;
}

void zhan_suen::thread_input_r_EN_A() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        input_r_EN_A = ap_const_logic_1;
    } else {
        input_r_EN_A = ap_const_logic_0;
    }
}

void zhan_suen::thread_input_r_Rst_A() {
    input_r_Rst_A = ap_rst_n_inv.read();
}

void zhan_suen::thread_input_r_WEN_A() {
    input_r_WEN_A = ap_const_lv4_0;
}

void zhan_suen::thread_result_Addr_A() {
    result_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): result_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void zhan_suen::thread_result_Addr_A_orig() {
    result_Addr_A_orig =  (sc_lv<32>) (tmp_reg_113.read());
}

void zhan_suen::thread_result_Clk_A() {
    result_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void zhan_suen::thread_result_Din_A() {
    result_Din_A = tmp_1_reg_128.read();
}

void zhan_suen::thread_result_EN_A() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st10_fsm_9.read())) {
        result_EN_A = ap_const_logic_1;
    } else {
        result_EN_A = ap_const_logic_0;
    }
}

void zhan_suen::thread_result_Rst_A() {
    result_Rst_A = ap_rst_n_inv.read();
}

void zhan_suen::thread_result_WEN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st10_fsm_9.read()))) {
        result_WEN_A = ap_const_lv4_F;
    } else {
        result_WEN_A = ap_const_lv4_0;
    }
}

void zhan_suen::thread_tmp_fu_91_p1() {
    tmp_fu_91_p1 = esl_zext<64,7>(i_reg_68.read());
}

void zhan_suen::thread_zhan_suen_CRTL_BUS_s_axi_U_ap_dummy_ce() {
    zhan_suen_CRTL_BUS_s_axi_U_ap_dummy_ce = ap_const_logic_1;
}

void zhan_suen::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if (!esl_seteq<1,1,1>(exitcond_fu_79_p2.read(), ap_const_lv1_0)) {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            } else {
                ap_NS_fsm = ap_ST_st3_fsm_2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_st4_fsm_3;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_st5_fsm_4;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_st6_fsm_5;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_st7_fsm_6;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_st8_fsm_7;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_st9_fsm_8;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_st10_fsm_9;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_st2_fsm_1;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXXXX";
            break;
    }
}

void zhan_suen::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"input_r_Addr_A\" :  \"" << input_r_Addr_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_EN_A\" :  \"" << input_r_EN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_WEN_A\" :  \"" << input_r_WEN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_Din_A\" :  \"" << input_r_Din_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_r_Dout_A\" :  \"" << input_r_Dout_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_Clk_A\" :  \"" << input_r_Clk_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_Rst_A\" :  \"" << input_r_Rst_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_Addr_A\" :  \"" << result_Addr_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_EN_A\" :  \"" << result_EN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_WEN_A\" :  \"" << result_WEN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_Din_A\" :  \"" << result_Din_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"result_Dout_A\" :  \"" << result_Dout_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_Clk_A\" :  \"" << result_Clk_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_Rst_A\" :  \"" << result_Rst_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_AWVALID\" :  \"" << s_axi_CRTL_BUS_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_AWREADY\" :  \"" << s_axi_CRTL_BUS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_AWADDR\" :  \"" << s_axi_CRTL_BUS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_WVALID\" :  \"" << s_axi_CRTL_BUS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_WREADY\" :  \"" << s_axi_CRTL_BUS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_WDATA\" :  \"" << s_axi_CRTL_BUS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_WSTRB\" :  \"" << s_axi_CRTL_BUS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_ARVALID\" :  \"" << s_axi_CRTL_BUS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_ARREADY\" :  \"" << s_axi_CRTL_BUS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_ARADDR\" :  \"" << s_axi_CRTL_BUS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_RVALID\" :  \"" << s_axi_CRTL_BUS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_RREADY\" :  \"" << s_axi_CRTL_BUS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_RDATA\" :  \"" << s_axi_CRTL_BUS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_RRESP\" :  \"" << s_axi_CRTL_BUS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_BVALID\" :  \"" << s_axi_CRTL_BUS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_BREADY\" :  \"" << s_axi_CRTL_BUS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_BRESP\" :  \"" << s_axi_CRTL_BUS_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
