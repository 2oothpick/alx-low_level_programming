#!/bin/bash
wget -P .. https://github.com/2oothpick/alx-low_level_programming/blob/b751fd17d046fa227e429b7fd21f50c924065602/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"