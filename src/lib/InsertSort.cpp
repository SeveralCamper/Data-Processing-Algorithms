#include "InsertSort.h"

void InsertSort(int * Array, int ArrayLength) {
    int tmp, j;
    for (int i = 2; i < ArrayLength; i++) {
        tmp = Array[i];
        j = i - 1;
        for (; j > 0 && tmp < Array[j]; j--) {
            Array[j + 1] = Array[j];
            j = j - 1;
        }

        Array[j+ 1] = tmp;
    }
}