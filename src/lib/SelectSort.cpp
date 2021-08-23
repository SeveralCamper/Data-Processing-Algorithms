#include "SelectSort.h"

void SelectSort(int Array[], int ArrayLength)
{
	int minArrayIndex;
    for (int i = 0; i < ArrayLength - 1; i++)
    {
        minArrayIndex = i;
        for (int j = i + 1; j < ArrayLength; j++)
        {
            if (Array[j] < Array[minArrayIndex])
            {
                minArrayIndex = j;
            }
        	swap(&Array[minArrayIndex],&Array[i]);
        }
    }
}

