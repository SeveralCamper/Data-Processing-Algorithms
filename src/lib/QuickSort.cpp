#include "QuickSort.h"

void QuickSort(int* Array, int first, int last) {
    int leading_el = Array[(first + last) / 2];
    int left_border = first, right_border = last;
 
    do {
        while (Array[left_border] < leading_el) {
            left_border++;
        }

        while (Array[right_border] > leading_el) {
            right_border--;
        }
 
        if(left_border <= right_border) {
            if (Array[left_border] > Array[right_border]) {
                int tmp = Array[left_border];
                Array[left_border] = Array[right_border];
                Array[right_border] = tmp;
            }
            left_border++;
            right_border--;
        }
    } while (left_border <= right_border);
 
    if (left_border < last) {
        QuickSort(Array, left_border, last);
    }

    if (first < right_border) {
        QuickSort(Array, first, right_border);
    }
}