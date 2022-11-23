#include "BinarySearch.h"

int BSearch(int *Array, int ArrayLength, int key) {
  int index = -1;
  int left = 0, middle = 0, right = ArrayLength - 1;
  while (left <= right) {
    middle = (left + right) / 2;

    if (Array[middle] == key) {
      index = middle;
      break;
    } else if (Array[middle] < key) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }

  return index;
}

int *BSearchAll(int *Array, int ArrayLength, int key) {
  int *index_array = new int[ArrayLength];

  return index_array;
}
