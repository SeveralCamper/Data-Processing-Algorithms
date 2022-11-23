#ifndef RADIX_SORT_H_
#define RADIX_SORT_H_

#include <cmath>

#include "ListProcessingMethods.h"

int take_digit_rank(int data, int rank);

list_t *RadixSort(list_t *list, int max_rank);
list_t *CountingSort(list_t *list, int rank);

#endif  // RADIX_SORT_H_