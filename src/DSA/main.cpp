#include <iostream>
#include "SelectSort.h"
#include "BubbleSort.h"
#include "ShakerSort.h"
#include "InsertSort.h"
#include "ShellSort.h"
#include "HeapSort.h"
#include "QuickSort.h"

int main () {   	
    int MassLength = 100;
    int Massive[MassLength];
    FillRand(Massive, MassLength,50,500);
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
}
