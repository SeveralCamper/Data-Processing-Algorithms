#include <iostream>
#include "SelectSort.h"
#include "BubbleSort.h"
#include "ShakerSort.h"
#include "InsertSort.h"
#include "ShellSort.h"
#include "HeapSort.h"
#include "QuickSort.h"
#include "BinarySearch.h"
#include "PhoneBook.h"
#include "ListProcessingMethods.h"
#include "MergeSort.h"
#include "RadixSort.h"

int main () {
    int key = 0;
    std::cout << "Welcome to my CPP Data Processing Algorithm Lib! ^_^" << std::endl;
    std::cout << "Please enter one of the numbers below to proceed:" << std::endl;
    std::cout << "1. Paste '1' to use methodes of array's processing." << std::endl;
    std::cout << "2. Paste '2' to use methodes of list's processing (list, queue, or stack)." << std::endl;
    std::cout << "3. Paste '3' to work with phonebook." << std::endl;
    std::cout << "0. Paste '4' to exit." << std::endl;
    std::cin >> key;
    switch (key) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            std::cout << "Good bye! ^_^" << std::endl;
            return;
        };
    
    int MassLength = 10;
    int Massive[MassLength];
    FillRand(Massive, MassLength, 10, 50);
    PrintMas(Massive, MassLength);
    std::cout << std::endl;
    /* Методы квадратичной трудоемкости
    SelectSort(Massive, MassLength);
    BubbleSort(Massive, MassLength);
    ShakerSort(Massive, MassLength);
    InsertSort(Massive, MassLength);

    Метод тредоемкости (n)^1.2
    ShellSort(Massive, MassLength);

    Быстрые методы сортировки
    HeapSort(Massive, MassLength);
    QuickSort(Massive, 0, MassLength - 1);
    PrintMas(Massive, MassLength);

    std::cout << "BSearch Result: " << BSearch(Massive, MassLength, 1) << std::endl; */

    /* phonebook_t PhoneBook;
    InitPhoneBook(&PhoneBook, MassLength);
    PrintPhoneBook(&PhoneBook);
    for (int i = 0; i < MassLength - 1; i++) {
        std::cout << "New PhoneBook:" << std::endl << std::endl;
        PhoneBookPopBack(&PhoneBook);
        PrintPhoneBook(&PhoneBook);
        MassLength = MassLength - 1;
        std::cout << std::endl;
    }

    std::cout << std::endl << "BIG PhoneBook:" << std::endl << std::endl;

    for (int i = 0; i < MassLength; i++) {
        std::cout << "New PhoneBook:" << std::endl << std::endl;
        PhoneBookPushBack(&PhoneBook, PhoneBook.phone_book_[i]);
        PrintPhoneBook(&PhoneBook);
        std::cout << std::endl;
    }


    // IN BLOCK!
    SelectSortAge(&PhoneBook);
    phonebooknode_t search = PhoneBookAgeSearch(&PhoneBook, 27);
    PrintPhoneBook(&PhoneBook);
    std::cout << "Searching node: " << std::endl;
    PrintPhoneBookNode(&search);

    // IN BLOCK!
    SelectSortIndex(&PhoneBook);
    search = PhoneBookIndexSearch(&PhoneBook, 3);
    PrintPhoneBook(&PhoneBook);
    std::cout << "Searching node: " << std::endl;
    PrintPhoneBookNode(&search); */

    list_t *queue = CreateList();
    for (int i = 0; i < 5; i++) {
        PushBackList(queue, i);
    }

    for (int i = 0; i < 20; i++) {
        PushFrontList(queue, i);
    }

    FillIncList(queue);
    PrintList(queue);
    std::cout << CountListData(queue) <<std::endl;
    FillDecList(queue);
    PrintList(queue);
    std::cout << CountListData(queue) <<std::endl;
    FillRandList(queue, 10000);
    PrintList(queue);
    std::cout << CountListData(queue) <<std::endl;
    /* for (int i = 0 ; i < 10 ; i++) {
        node_t *new_node = PopBackList(queue);
        std::cout << new_node->data_ << std::endl;
        delete(new_node);
    }
    PrintList(queue);
    for (int i = 0; i < 10; i++) {
        PushBackList(queue, i);
    }
    for (int i = 0 ; i < 10 ; i++) {
        node_t *new_node = PopFrontList(queue);
        std::cout << new_node->data_ << std::endl;
        delete(new_node);
    }
    std::cout << queue->size_ << std::endl;
    PrintList(queue);

    for (int i = 0; i < 20; i++) {
        PushFrontList(queue, i);
    }
    PrintList(queue);

    list_t * merged_list = MergeSort(queue);
    PrintList(queue); */

    queue = RadixSort(queue, 4);

    DeleteList(queue);
    // DeleteList(merged_list);

    return 0;
}
