#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ubuntu-admin/SharedFolder/EIT_Studies/TUB_Docs/Sem2/EmbProj/Xilinx_Workspace/gain_stream/solution1/.autopilot/db/a.g.bc ${1+"$@"}
