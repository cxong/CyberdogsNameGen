#!/bin/sh
emcc *.c -o index.html --preload-file prefixes.txt --preload-file suffixes.txt --preload-file suffixnames.txt