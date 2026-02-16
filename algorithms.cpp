#include "steps.h"
#include <vector>

std::vector<Step> bubbleSort(std::vector<int> &arr) {
  std::vector<Step> steps;
  int vectorSize = arr.size();
  for (int i = 0; i < vectorSize - 1; i++) {
    for (int j = 0; j < vectorSize - 1 - i; j++) {
      steps.push_back({Compare, j, j + 1});
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        steps.push_back({Swap, j, j + 1});
      }
    }
  }
  return steps;
}
