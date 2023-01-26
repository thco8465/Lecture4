CXX = g++
CXXFLAGS = -std=c++20 -Wall  # flags for the compiler (use c++20 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!
all: 
	test main
clean:
	rm main
test: test.cpp
    $(CXX) $(CXXFLAGS) test.cpp -o main
main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main

