GXX = g++
GXX_FLAGS = -std=c++17 -Wall

all: main

main: test.cpp 
	$(GXX) $(GXX_FLAGS) test.cpp -o main

clean: 
	rm main *.out