#include "ShellSort.h"

void ShellSort(int * Array, int ArrayLength) {
    int spliting_step = ArrayLength/2;
    while (spliting_step > 0) {
        int tmp, j;
        for (int i = spliting_step; i < ArrayLength; i++) {
            tmp = Array[i];
            for (j = i - spliting_step; j >= 0 && tmp < Array[j]; j = j - spliting_step) {
                Array[j + spliting_step] = Array[j];
            }

            Array[j + spliting_step] = tmp;
        }

        spliting_step = spliting_step/2;
    }
}
