// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="zhan_suen,hls_ip_2015_4,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.080000,HLS_SYN_LAT=901,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=4,HLS_SYN_FF=201,HLS_SYN_LUT=129}" *)

module zhan_suen (
        ap_clk,
        ap_rst_n,
        input_r_Addr_A,
        input_r_EN_A,
        input_r_WEN_A,
        input_r_Din_A,
        input_r_Dout_A,
        input_r_Clk_A,
        input_r_Rst_A,
        result_Addr_A,
        result_EN_A,
        result_WEN_A,
        result_Din_A,
        result_Dout_A,
        result_Clk_A,
        result_Rst_A,
        s_axi_CRTL_BUS_AWVALID,
        s_axi_CRTL_BUS_AWREADY,
        s_axi_CRTL_BUS_AWADDR,
        s_axi_CRTL_BUS_WVALID,
        s_axi_CRTL_BUS_WREADY,
        s_axi_CRTL_BUS_WDATA,
        s_axi_CRTL_BUS_WSTRB,
        s_axi_CRTL_BUS_ARVALID,
        s_axi_CRTL_BUS_ARREADY,
        s_axi_CRTL_BUS_ARADDR,
        s_axi_CRTL_BUS_RVALID,
        s_axi_CRTL_BUS_RREADY,
        s_axi_CRTL_BUS_RDATA,
        s_axi_CRTL_BUS_RRESP,
        s_axi_CRTL_BUS_BVALID,
        s_axi_CRTL_BUS_BREADY,
        s_axi_CRTL_BUS_BRESP,
        interrupt
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 10'b1;
parameter    ap_ST_st2_fsm_1 = 10'b10;
parameter    ap_ST_st3_fsm_2 = 10'b100;
parameter    ap_ST_st4_fsm_3 = 10'b1000;
parameter    ap_ST_st5_fsm_4 = 10'b10000;
parameter    ap_ST_st6_fsm_5 = 10'b100000;
parameter    ap_ST_st7_fsm_6 = 10'b1000000;
parameter    ap_ST_st8_fsm_7 = 10'b10000000;
parameter    ap_ST_st9_fsm_8 = 10'b100000000;
parameter    ap_ST_st10_fsm_9 = 10'b1000000000;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    C_S_AXI_CRTL_BUS_DATA_WIDTH = 32;
parameter    ap_const_int64_8 = 8;
parameter    C_S_AXI_CRTL_BUS_ADDR_WIDTH = 5;
parameter    C_S_AXI_DATA_WIDTH = 32;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv32_8 = 32'b1000;
parameter    ap_const_lv7_0 = 7'b0000000;
parameter    ap_const_lv32_9 = 32'b1001;
parameter    ap_const_lv4_0 = 4'b0000;
parameter    ap_const_lv4_F = 4'b1111;
parameter    ap_const_lv7_64 = 7'b1100100;
parameter    ap_const_lv7_1 = 7'b1;
parameter    ap_true = 1'b1;
parameter    C_S_AXI_CRTL_BUS_WSTRB_WIDTH = (C_S_AXI_CRTL_BUS_DATA_WIDTH / ap_const_int64_8);
parameter    C_S_AXI_WSTRB_WIDTH = (C_S_AXI_DATA_WIDTH / ap_const_int64_8);

input   ap_clk;
input   ap_rst_n;
output  [31:0] input_r_Addr_A;
output   input_r_EN_A;
output  [3:0] input_r_WEN_A;
output  [31:0] input_r_Din_A;
input  [31:0] input_r_Dout_A;
output   input_r_Clk_A;
output   input_r_Rst_A;
output  [31:0] result_Addr_A;
output   result_EN_A;
output  [3:0] result_WEN_A;
output  [31:0] result_Din_A;
input  [31:0] result_Dout_A;
output   result_Clk_A;
output   result_Rst_A;
input   s_axi_CRTL_BUS_AWVALID;
output   s_axi_CRTL_BUS_AWREADY;
input  [C_S_AXI_CRTL_BUS_ADDR_WIDTH - 1 : 0] s_axi_CRTL_BUS_AWADDR;
input   s_axi_CRTL_BUS_WVALID;
output   s_axi_CRTL_BUS_WREADY;
input  [C_S_AXI_CRTL_BUS_DATA_WIDTH - 1 : 0] s_axi_CRTL_BUS_WDATA;
input  [C_S_AXI_CRTL_BUS_WSTRB_WIDTH - 1 : 0] s_axi_CRTL_BUS_WSTRB;
input   s_axi_CRTL_BUS_ARVALID;
output   s_axi_CRTL_BUS_ARREADY;
input  [C_S_AXI_CRTL_BUS_ADDR_WIDTH - 1 : 0] s_axi_CRTL_BUS_ARADDR;
output   s_axi_CRTL_BUS_RVALID;
input   s_axi_CRTL_BUS_RREADY;
output  [C_S_AXI_CRTL_BUS_DATA_WIDTH - 1 : 0] s_axi_CRTL_BUS_RDATA;
output  [1:0] s_axi_CRTL_BUS_RRESP;
output   s_axi_CRTL_BUS_BVALID;
input   s_axi_CRTL_BUS_BREADY;
output  [1:0] s_axi_CRTL_BUS_BRESP;
output   interrupt;

reg input_r_EN_A;
reg result_EN_A;
reg[3:0] result_WEN_A;
reg    ap_rst_n_inv;
wire    ap_start;
reg    ap_done;
reg    ap_idle;
(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm = 10'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_28;
reg    ap_ready;
wire   [31:0] y;
wire    zhan_suen_CRTL_BUS_s_axi_U_ap_dummy_ce;
reg  signed [31:0] y_read_reg_100;
wire   [6:0] i_1_fu_85_p2;
reg   [6:0] i_1_reg_108;
reg    ap_sig_cseq_ST_st2_fsm_1;
reg    ap_sig_bdd_104;
wire   [63:0] tmp_fu_91_p1;
reg   [63:0] tmp_reg_113;
wire   [0:0] exitcond_fu_79_p2;
reg  signed [31:0] input_load_reg_123;
reg    ap_sig_cseq_ST_st3_fsm_2;
reg    ap_sig_bdd_120;
wire   [31:0] grp_fu_96_p2;
reg   [31:0] tmp_1_reg_128;
reg    ap_sig_cseq_ST_st9_fsm_8;
reg    ap_sig_bdd_129;
reg   [6:0] i_reg_68;
reg    ap_sig_cseq_ST_st10_fsm_9;
reg    ap_sig_bdd_139;
wire   [31:0] input_r_Addr_A_orig;
wire   [31:0] result_Addr_A_orig;
wire    grp_fu_96_ce;
reg   [9:0] ap_NS_fsm;


zhan_suen_CRTL_BUS_s_axi #(
    .C_S_AXI_ADDR_WIDTH( C_S_AXI_CRTL_BUS_ADDR_WIDTH ),
    .C_S_AXI_DATA_WIDTH( C_S_AXI_CRTL_BUS_DATA_WIDTH ))
zhan_suen_CRTL_BUS_s_axi_U(
    .AWVALID( s_axi_CRTL_BUS_AWVALID ),
    .AWREADY( s_axi_CRTL_BUS_AWREADY ),
    .AWADDR( s_axi_CRTL_BUS_AWADDR ),
    .WVALID( s_axi_CRTL_BUS_WVALID ),
    .WREADY( s_axi_CRTL_BUS_WREADY ),
    .WDATA( s_axi_CRTL_BUS_WDATA ),
    .WSTRB( s_axi_CRTL_BUS_WSTRB ),
    .ARVALID( s_axi_CRTL_BUS_ARVALID ),
    .ARREADY( s_axi_CRTL_BUS_ARREADY ),
    .ARADDR( s_axi_CRTL_BUS_ARADDR ),
    .RVALID( s_axi_CRTL_BUS_RVALID ),
    .RREADY( s_axi_CRTL_BUS_RREADY ),
    .RDATA( s_axi_CRTL_BUS_RDATA ),
    .RRESP( s_axi_CRTL_BUS_RRESP ),
    .BVALID( s_axi_CRTL_BUS_BVALID ),
    .BREADY( s_axi_CRTL_BUS_BREADY ),
    .BRESP( s_axi_CRTL_BUS_BRESP ),
    .ACLK( ap_clk ),
    .ARESET( ap_rst_n_inv ),
    .ACLK_EN( zhan_suen_CRTL_BUS_s_axi_U_ap_dummy_ce ),
    .ap_start( ap_start ),
    .interrupt( interrupt ),
    .ap_ready( ap_ready ),
    .ap_done( ap_done ),
    .ap_idle( ap_idle ),
    .y( y )
);

zhan_suen_mul_32s_32s_32_6 #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
zhan_suen_mul_32s_32s_32_6_U1(
    .clk( ap_clk ),
    .reset( ap_rst_n_inv ),
    .din0( input_load_reg_123 ),
    .din1( y_read_reg_100 ),
    .ce( grp_fu_96_ce ),
    .dout( grp_fu_96_p2 )
);



always @ (posedge ap_clk) begin : ap_ret_ap_CS_fsm
    if (ap_rst_n_inv == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_9)) begin
        i_reg_68 <= i_1_reg_108;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0))) begin
        i_reg_68 <= ap_const_lv7_0;
    end
end

always @ (posedge ap_clk) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        i_1_reg_108 <= i_1_fu_85_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st3_fsm_2)) begin
        input_load_reg_123 <= input_r_Dout_A;
    end
end

always @ (posedge ap_clk) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_8)) begin
        tmp_1_reg_128 <= grp_fu_96_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & (exitcond_fu_79_p2 == ap_const_lv1_0))) begin
        tmp_reg_113[6 : 0] <= tmp_fu_91_p1[6 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0))) begin
        y_read_reg_100 <= y;
    end
end

always @ (ap_sig_cseq_ST_st2_fsm_1 or exitcond_fu_79_p2) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & ~(exitcond_fu_79_p2 == ap_const_lv1_0))) begin
        ap_done = ap_const_logic_1;
    end else begin
        ap_done = ap_const_logic_0;
    end
end

always @ (ap_start or ap_sig_cseq_ST_st1_fsm_0) begin
    if ((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st2_fsm_1 or exitcond_fu_79_p2) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & ~(exitcond_fu_79_p2 == ap_const_lv1_0))) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_139) begin
    if (ap_sig_bdd_139) begin
        ap_sig_cseq_ST_st10_fsm_9 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st10_fsm_9 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_28) begin
    if (ap_sig_bdd_28) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_104) begin
    if (ap_sig_bdd_104) begin
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_120) begin
    if (ap_sig_bdd_120) begin
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_129) begin
    if (ap_sig_bdd_129) begin
        ap_sig_cseq_ST_st9_fsm_8 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st9_fsm_8 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st2_fsm_1) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        input_r_EN_A = ap_const_logic_1;
    end else begin
        input_r_EN_A = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st10_fsm_9) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_9)) begin
        result_EN_A = ap_const_logic_1;
    end else begin
        result_EN_A = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st10_fsm_9) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_9)) begin
        result_WEN_A = ap_const_lv4_F;
    end else begin
        result_WEN_A = ap_const_lv4_0;
    end
end
always @ (ap_start or ap_CS_fsm or exitcond_fu_79_p2) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~(ap_start == ap_const_logic_0)) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_st2_fsm_1 : 
        begin
            if (~(exitcond_fu_79_p2 == ap_const_lv1_0)) begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end else begin
                ap_NS_fsm = ap_ST_st3_fsm_2;
            end
        end
        ap_ST_st3_fsm_2 : 
        begin
            ap_NS_fsm = ap_ST_st4_fsm_3;
        end
        ap_ST_st4_fsm_3 : 
        begin
            ap_NS_fsm = ap_ST_st5_fsm_4;
        end
        ap_ST_st5_fsm_4 : 
        begin
            ap_NS_fsm = ap_ST_st6_fsm_5;
        end
        ap_ST_st6_fsm_5 : 
        begin
            ap_NS_fsm = ap_ST_st7_fsm_6;
        end
        ap_ST_st7_fsm_6 : 
        begin
            ap_NS_fsm = ap_ST_st8_fsm_7;
        end
        ap_ST_st8_fsm_7 : 
        begin
            ap_NS_fsm = ap_ST_st9_fsm_8;
        end
        ap_ST_st9_fsm_8 : 
        begin
            ap_NS_fsm = ap_ST_st10_fsm_9;
        end
        ap_ST_st10_fsm_9 : 
        begin
            ap_NS_fsm = ap_ST_st2_fsm_1;
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end



always @ (ap_rst_n) begin
    ap_rst_n_inv = ~ap_rst_n;
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_104 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_120 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_129 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_8]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_139 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_9]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_28 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end

assign exitcond_fu_79_p2 = (i_reg_68 == ap_const_lv7_64? 1'b1: 1'b0);

assign grp_fu_96_ce = ap_const_logic_1;

assign i_1_fu_85_p2 = (i_reg_68 + ap_const_lv7_1);

assign input_r_Addr_A = input_r_Addr_A_orig << ap_const_lv32_2;

assign input_r_Addr_A_orig = tmp_fu_91_p1;

assign input_r_Clk_A = ap_clk;

assign input_r_Din_A = ap_const_lv32_0;

assign input_r_Rst_A = ap_rst_n_inv;

assign input_r_WEN_A = ap_const_lv4_0;

assign result_Addr_A = result_Addr_A_orig << ap_const_lv32_2;

assign result_Addr_A_orig = tmp_reg_113;

assign result_Clk_A = ap_clk;

assign result_Din_A = tmp_1_reg_128;

assign result_Rst_A = ap_rst_n_inv;

assign tmp_fu_91_p1 = i_reg_68;

assign zhan_suen_CRTL_BUS_s_axi_U_ap_dummy_ce = ap_const_logic_1;
always @ (posedge ap_clk) begin
    tmp_reg_113[63:7] <= 57'b000000000000000000000000000000000000000000000000000000000;
end



endmodule //zhan_suen
