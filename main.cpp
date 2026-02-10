#include "algorithms.cpp"
#include <iostream>
#include <random> //for rand() fucntion
#include <vector>

std::vector<int> arrayMaker(int size, std::mt19937 &rng);
void printVector(const std::vector<int> &v);
void bubbleSort(std::vector<int> &arr);

int main() {
  std::random_device rd;
  std::mt19937 rng(rd());
  // initializes random seed to rng
  // for random numbers
  std::cout << "What size would you like your array?" << std::endl;
  int size;
  std::cin >> size;

  auto arr = arrayMaker(size, rng);
  printVector(arr);
  bubbleSort(arr);
  printVector(arr);

  return 0;
}

std::vector<int> arrayMaker(int size, std::mt19937 &rng) { // takes size and
                                                           // seed
  std::uniform_int_distribution<int> dist(0,
                                          99); // makes random bumbers from 0,99
  std::vector<int> a(size);        // creates a vector of the size passed
  for (int i = 0; i < size; i++) { // for loop to put numbers
    a[i] = dist(rng);
  };
  return a;
}

void printVector(const std::vector<int> &v) {
  for (int x : v) {
    std::cout << x << " ";
  }
  std::cout << "\n";
}
