#include "ArrayProcessingMethods.h"

int random (int ArrayLength)
{
	return rand() % ArrayLength;
}

void swap (int *xp,int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void Fillinc(int Array[],int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	 Array[i] += i;

}

void FillDec (int Array[], int ArrayLength)
{
	for (int i = 0; ArrayLength > 0; i++, ArrayLength--)
	 Array[i]= ArrayLength-1;
}

void PrintMas (int Array[], int ArrayLength)
{
	for (int i=0; i < ArrayLength; i++)
		std::cout << Array[i] << std::endl;
}

void FillRand (int Array[], int ArrayLength, int RigthBorder, int LeftBorder)
{
	for (int i = 0; i < ArrayLength; i++)
	 Array[i] = random (RigthBorder - LeftBorder + 1) + LeftBorder;
}

int CheckSum (int Array[], int ArrayLength)
{
	int sum = 0;
	for (int i = 0; i < ArrayLength; i++)
		sum = sum + Array[i];

	return sum;
}

int RunNumber (int Array[], int ArrayLength)
{
	int k = 0;
	for (int i=0; i < ArrayLength; i++)
	{
		if  (Array[i] > Array[i+1])
		k += 1;
	}
	return k;
}
