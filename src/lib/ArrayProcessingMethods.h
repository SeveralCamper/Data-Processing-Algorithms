#ifndef ARRAY_PROCESSING_METHODS_H_
#define ARRAY_PROCESSING_METHODS_H_

#include <iostream>

int random (int ArrayLength);

void swap (int *xp,int *yp);

void Fillinc(int Array[],int ArrayLength);

void FillDec (int Array[], int ArrayLength);

void PrintMas (int Array[], int ArrayLength);

void FillRand (int Array[], int ArrayLength, int RigthBorder, int LeftBorder);

int CheckSum (int Array[], int ArrayLength);

int RunNumber (int Array[], int ArrayLength);

#endif 