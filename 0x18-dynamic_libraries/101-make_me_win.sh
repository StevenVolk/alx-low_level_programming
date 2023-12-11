#!/bin/bash
wget -P /tmp https://github.com/StevenVolk/alx-low_level_programming/raw/master/0x18-dynamic_libraries/solve.so
export LD_PRELOAD=/tmp/solve.so
