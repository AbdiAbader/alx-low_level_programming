#!/bin/bash
curl https://github.com/AbdiAbader/alx-low_level_programming/tree/master/0x18-dynamic_libraries/librand.o
export LD_PRELOAD=/librand.o
