#include "InsertSort.h"

void InsertSort(int* Array, int ArrayLength) {
  int tmp, j;
  for (int i = 1; i < ArrayLength; i++) {
    tmp = Array[i];
    for (j = i; j > 0 && tmp < Array[j - 1]; j--) {
      Array[j] = Array[j - 1];
    }

    Array[j] = tmp;
  }
}