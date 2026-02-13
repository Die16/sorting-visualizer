#include <iostream>
#include <random>
#include <vector>
#include "steps.h"

void bubbleSort(std::vector<int> &arr) {
  int vectorSize = arr.size();
  for (int i = 0; i < vectorSize - 1; i++) {
    for (int j = 0; j < vectorSize - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
