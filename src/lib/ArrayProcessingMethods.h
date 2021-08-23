#ifndef ARRAY_PROCESSING_METHODS_H_
#define ARRAY_PROCESSING_METHODS_H_

#include <iostream>

int random (int MassLength);

void swap (int *xp,int *yp);

void Fillinc(int Mass[],int MassLength);

void FillDec (int Mass[], int MassLength);

void PrintMas (int Mass[], int MassLength);

void FillRand (int Mass[], int MassLength, int RigthBorder, int LeftBorder);

int CheckSum (int Mass[], int MassLength);

int RunNumber (int Mass[], int MassLength);

#endif