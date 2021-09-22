CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

clean:
	rm Test.o

maze: Test.o

Test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp test.cpp