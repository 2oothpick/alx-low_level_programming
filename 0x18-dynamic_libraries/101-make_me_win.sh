#!/bin/bash
wget -P /tmp https://github.com/2oothpick/alx-low_level_programming/blob/cb65e098f4714ce5fc9120aa5608c512f3304137/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so