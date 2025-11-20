#include <cstdlib> //for rand() fucntion
#include <iostream>
#include <vector>

std::vector<int> random_vector(int size);
void swap(int left, int right);
void bubble_sort(std::vector<int>);
void printarr(std::vector<int> arr);

int main() {
  // variables for the list
  int size;
  std::cout << "What size do you want the array?";
  std::cin >> size;

  // make list of size n with random numbers
  std::vector<int> arr = random_vector(size);

  // bubble sorts
  printarr(arr);
  std::cout << 1;
  bubble_sort(arr);
  printarr(arr);

  return 0;
}

void bubble_sort(std::vector<int> arr) {
  for (int i = 0; i < arr.size(); i++)
    for (int j = 1; j < arr.size(); j++) {
      swap(i, j);
    }
}

void printarr(std::vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << "  ";
  }
  std::cout << std::endl;
}

void swap(int left, int right) {
  int temp = right;
  right = left;
  left = temp;
}

std::vector<int> random_vector(int size) {
  std::vector<int> arr(size);
  for (int i = 0; i < size; i++) {
    arr[i] = std::rand() % 50;
  }
  return arr;
}
