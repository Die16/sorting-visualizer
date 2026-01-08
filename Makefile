CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

bubble_sort: bubble_sort.cpp
	$(CXX) $(CXXFLAGS) bubble_sort.cpp -o bubble_sort

