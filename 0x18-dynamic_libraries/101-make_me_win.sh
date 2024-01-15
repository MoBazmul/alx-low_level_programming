#!/bin/bash
wget -P .. https://github.com/alx-tools/0x18.c
export LD_PRELOAD="$PWD/../libgiga.so"

