#include <cstdlib> //for rand() fucntion
#include <iostream>
#include <vector>

std::vector<int> random_vector(int size);
void swap(int left, int right, std::vector<int> arr);
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
  std::cout << "Unsorted array";
  printarr(arr);

  swap(0, 1, arr);

  std::cout << "sorted array";
  printarr(arr);

  return 0;
}

void bubble_sort(std::vector<int> arr) {
  for (int i = 0; i < arr.size(); i++)
    for (int j = 1; j < arr.size(); j++) {
      if (i > j) {
      }
    }
}

void printarr(std::vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << "  ";
  }
  std::cout << std::endl;
}

void swap(int left, int right, std::vector<int> arr) {
  int temp = arr[right];
  arr[right] = arr[left];
  arr[left] = temp;
}

std::vector<int> random_vector(int size) {
  std::vector<int> arr(size);
  for (int i = 0; i < size; i++) {
    arr[i] = std::rand() % 50;
  }
  return arr;
}
