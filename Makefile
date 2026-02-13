CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

main: main.cpp algorithms.cpp
	$(CXX) $(CXXFLAGS) main.cpp algorithms.cpp -o main

