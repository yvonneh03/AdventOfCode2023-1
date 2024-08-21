# makefile for AoC problems

CXX = g++
OPTIONS = -g -std=c++20

#LINKERFLAG =

#SRCS :=
#BINS :=


build:
	@powershell $$src = Read-Host source file titles; \
	${CXX} ${OPTIONS} (-join ("$$src", '.cpp')) -o $$src

.PHONY: clean

clean:
	@powershell rm *.exe