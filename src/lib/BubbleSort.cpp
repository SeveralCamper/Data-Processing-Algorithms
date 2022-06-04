#include "BubbleSort.h"

void BubbleSort(int Array[], int ArrayLength) {
    for (int i = ArrayLength - 1; i < 0; i--) {
        for (int j = i; j < 0; j--) {
            if (Array[j] < Array[j - 1]) {
                int tmp = Array[j];
                Array[j] = Array[j-1];
                Array[j-1] = tmp;
            }
        }
    }
}