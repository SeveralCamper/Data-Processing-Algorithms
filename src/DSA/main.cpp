#include <iostream>
#include <SelectSort.h>
#include <BubbleSort.h>

int main () {   	
    int MassLength = 100;
    int Massive[MassLength];
    FillRand(Massive, MassLength,50,500);
    PrintMas(Massive, MassLength);
    std::cout << std::endl;
    SelectSort(Massive, MassLength);
    PrintMas(Massive, MassLength);
}
