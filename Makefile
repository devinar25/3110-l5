CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

all: test

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test_catch # name of output should be consistent

# runs for "make clean"
clean:
	rm test  #include all targets here
