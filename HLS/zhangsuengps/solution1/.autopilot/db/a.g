#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/saptarshi/Documents/AEP/zhangsuengps/solution1/.autopilot/db/a.g.bc ${1+"$@"}