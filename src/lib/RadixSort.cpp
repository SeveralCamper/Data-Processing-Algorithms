#include "RadixSort.h"

list_t *RadixSort(list_t *list, int max_rank) {
    list_t *result_list = CreateList();
    result_list = list;

    for (int i = 1; i <= max_rank; i++) {
        result_list = CountingSort(result_list, i);
    }

    return result_list;
}

int take_digit_rank(int data, int rank) {
    int check_rank = 0, digit = 0;
    while (check_rank < rank) {
        digit = data % 10;
        data = data / 10;
        check_rank++;
    }

    return digit;
}

list_t *CountingSort(list_t *list, int rank) {
    std::cout << "HERE" << std::endl;
    int data_matrix[10][list->size_];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < list->size_; j++) {
            data_matrix[i][j] = INT32_MIN;
        }
    }

    node_t *tmp = list->head_;
    while (tmp != nullptr) {
        int data = tmp->data_;
        int digit = take_digit_rank(data, rank);
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < list->size_; j++) {
                if (digit == i && data_matrix[i][j] == INT32_MIN) {
                    // std::cout << digit << " " << i << std::endl;
                    data_matrix[i][j] = data;
                    break;
                }
            }
        }
        tmp = tmp->next_;
    }

    list_t *result = CreateList();
    std::cout << "Sorted matrix: " << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << i << ": ";
        for (int j = 0; j < list->size_; j++) {
            if (data_matrix[i][j] != INT32_MIN) {
                PushBackList(result, data_matrix[i][j]);
                std::cout << data_matrix[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }

    PrintList(result);

    return result;
}