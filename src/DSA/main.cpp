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

int main () {   	
    int MassLength = 10;
    int Massive[MassLength];
    FillRand(Massive, MassLength, 10, 50);
    PrintMas(Massive, MassLength);
    std::cout << std::endl;
    // Методы квадратичной трудоемкости
    // SelectSort(Massive, MassLength);
    // BubbleSort(Massive, MassLength);
    // ShakerSort(Massive, MassLength);
    // InsertSort(Massive, MassLength);

    // Метод тредоемкости (n)^1.2
    // ShellSort(Massive, MassLength);

    // Быстрые методы сортировки
    // HeapSort(Massive, MassLength);
    QuickSort(Massive, 0, MassLength - 1);
    PrintMas(Massive, MassLength);

    std::cout << "BSearch Result: " << BSearch(Massive, MassLength, 1) << std::endl;

    phonebook_t PhoneBook;
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
    PrintPhoneBookNode(&search);

    return 0;
}
