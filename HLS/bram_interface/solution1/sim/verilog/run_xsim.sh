
xelab xil_defaultlib.apatb_zhan_suen_top -prj zhan_suen.prj --lib "ieee_proposed=./ieee_proposed" -s zhan_suen 
xsim --noieeewarnings zhan_suen -tclbatch zhan_suen.tcl

