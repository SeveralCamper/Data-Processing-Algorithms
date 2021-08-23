#include <iostream>
#include <SelectSort.h>

int main ()
{   	
    int MassLength = 1000;
    int Massive[MassLength];
    FillRand(Massive,MassLength,50,500);
    SelectSort(Massive,MassLength);
    PrintMas(Massive,MassLength);
}
