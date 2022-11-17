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
    InitPhoneBook(&PhoneBook, 10);
    PrintPhoneBook(&PhoneBook, 10);
    SelectSortAge(&PhoneBook, 10);
    std::cout << std::endl;
    PrintPhoneBook(&PhoneBook, 10);


    // PrintMas(Massive, MassLength);
}
