#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ubuntu-admin/SharedFolder/EIT_Studies/TUB_Docs/Sem2/EmbProj/GitHub/AEP/HLS/ZS_BRAM_F_V1/solution1/.autopilot/db/a.g.bc ${1+"$@"}
