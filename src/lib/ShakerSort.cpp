#include "ShakerSort.h"

void ShakerSort(int* Array, int ArrayLength) {
  int LeftBorder = 1, RightBorder = ArrayLength, k = ArrayLength;
  while (LeftBorder < RightBorder) {
    for (int i = RightBorder; i >= LeftBorder; i--) {
      if (Array[i] < Array[i - 1]) {
        swap(&Array[i], &Array[i - 1]);
        k = i;
      }
    }
    LeftBorder = k;

    for (int i = LeftBorder; i <= RightBorder; i++) {
      if (Array[i - 1] > Array[i]) {
        swap(&Array[i], &Array[i - 1]);
        k = i;
      }
    }
    RightBorder = k;
  }
}