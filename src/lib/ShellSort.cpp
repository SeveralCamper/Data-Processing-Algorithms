#include "ShellSort.h"

void ShellSort(int * Array, int ArrayLength) {
    for (int k = ArrayLength/2; k > 0; k = k/2) {
        int tmp, j;
        for (int i = k + 1; i < ArrayLength; i++) {
            tmp = Array[i];
            j = i - k;
            for (; j > 0 && tmp < Array[j]; j--) {
                Array[j + k] = Array[j];
                j = j - k;
            }

            Array[j+ k] = tmp;
        }
    }
}