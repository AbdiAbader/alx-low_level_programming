#!/bin/bash
crul -o r/librand.so https://github.com/AbdiAbader/alx-low_level_programming/tree/master/0x18-dynamic_libraries/librand.so
export LD_PRELOAD=r/librand.so
