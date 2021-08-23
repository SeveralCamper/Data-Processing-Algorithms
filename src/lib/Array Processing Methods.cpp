#include <iostream>
#include <stdlib.h>

int random (int MassLength)
{
	return rand() % MassLength;
}

void swap (int *xp,int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void Fillinc(int Mass[],int MassLength)
{
	for (int i = 0; i < MassLength; i++)
		Mass[i] += i;

}

void FillDec (int Mass[], int MassLength)
{
	for (int i = 0; MassLength > 0; i++, MassLength--)
		Mass[i]= MassLength-1;
}

void PrintMas (int Mass[], int MassLength)
{
	for (int i=0; i < MassLength; i++)
		printf ("%d; ", Mass[i]);
}

void FillRand (int Mass[], int MassLength, int RigthBorder, int LeftBorder)
{
	for (int i = 0; i < MassLength; i++)
		Mass[i] = random (RigthBorder - LeftBorder + 1) + LeftBorder;
}

int CheckSum (int Mass[], int MassLength)
{
	int sum = 0;
	for (int i = 0; i < MassLength; i++)
		sum = sum + Mass[i];

	return sum;
}

int RunNumber (int Mass[], int MassLength)
{
	int k = 0;
	for (int i=0; i < MassLength; i++)
	{
		if (Mass[i] > Mass[i+1])
		k += 1;
	}
	return k;
}
