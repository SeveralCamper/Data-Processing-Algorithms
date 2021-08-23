#include "SelectSort.h"

void SelectSort(int Mass[], int MassLength)
{
	int minMassIndex;
    for (int i = 0; i < MassLength - 1; i++)
    {
        minMassIndex = i;
        for (int j = i + 1; j < MassLength; j++)
        {
            if (Mass[j] < Mass[minMassIndex])
            {
                minMassIndex = j;
            }
        	swap(&Mass[minMassIndex],&Mass[i]);
        }
    }
}

