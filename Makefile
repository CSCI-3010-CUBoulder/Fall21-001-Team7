GXX = g++
GXX_FLAGS = -std=c++17 -Wall

all: main

main: functions_to_implement.cpp
	$(GXX) $(GXX-GXX_FLAGS) functions_to_implement.cpp -o main