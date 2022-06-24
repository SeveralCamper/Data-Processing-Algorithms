#include "BubbleSort.h"

void BubbleSort(int * Array, int ArrayLength) {
    for (int  i = ArrayLength; i > 0; i--) {
        bool flag = true;
        for (int j = ArrayLength - 1; j > ArrayLength - i; j--) {
            if (Array[j] < Array[j - 1]) {
                flag = false;
                swap(&Array[j], &Array[j - 1]);
            }
        }

        if (flag) {
            break;
        }
    }
}