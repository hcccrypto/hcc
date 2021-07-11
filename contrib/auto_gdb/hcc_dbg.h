#!/usr/bin/env bash
# use testnet settings,  if you need mainnet,  use ~/.dashcore/dashd.pid file instead
export LC_ALL=C

hcc_pid=$(<~/.hcccore/testnet3/hcc.pid)
sudo gdb -batch -ex "source debug.gdb" hccd ${hcc_pid}
