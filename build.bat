@echo off

set filename=term-size

windres --codepage=65001 meta.rc meta.o
gcc "%filename%".c meta.o -municode -O2 -s -o "%filename%".exe -std=c99
del meta.o
