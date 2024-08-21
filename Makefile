CXX = g++
OPTIONS = -g -std=c++20

#LINKERFLAG =

#SRCS :=
#BINS :=
	

build:
	@powershell $$src = Read-Host source file titles; \
	${CXX} ${OPTIONS} (-join ("$$src", '.cpp')) -o $$src

# echo "$(echo $src).cpp"

.PHONY: clean

clean:
	@powershell rm *.exe