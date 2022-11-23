#include "HeapSort.h"

void Heapify(int* Array, int ArrayLength, int i) {
  int largest = i;

  int l = 2 * i + 1;
  int r = 2 * i + 2;

  if (l < ArrayLength && Array[l] > Array[largest]) {
    largest = l;
  }

  if (r < ArrayLength && Array[r] > Array[largest]) {
    largest = r;
  }

  if (largest != i) {
    std::swap(Array[i], Array[largest]);

    Heapify(Array, ArrayLength, largest);
  }
}

void HeapSort(int* Array, int ArrayLength) {
  for (int i = ArrayLength / 2 - 1; i >= 0; i--) {
    Heapify(Array, ArrayLength, i);
  }

  for (int i = ArrayLength - 1; i >= 0; i--) {
    std::swap(Array[0], Array[i]);

    Heapify(Array, i, 0);
  }
}