
xelab xil_defaultlib.apatb_zhangsueng_top -prj zhangsueng.prj --lib "ieee_proposed=./ieee_proposed" -s zhangsueng 
xsim --noieeewarnings zhangsueng -tclbatch zhangsueng.tcl

