#include <process.h>
#include <iostream>

#include "BinaryArray.h"
#include "Find.h"
#include "Polynome.h"
#include "Inversion.h"
#include "MaxSubArray.h"
#include "Test/PolynomeTest.h"

unsigned a[10] = { 1, 0, 0, 1, 0, 1, 0, 0, 1, 1 };
unsigned b[10] = { 1, 0, 0, 1, 1, 0, 0, 1, 1, 1 };

int const s_nArraySize = 10;
int s_array[s_nArraySize] = { 5, 0, 3, 9, 4, 8, 7, 1, 2, 6 };

int main()
{
   // Sort::InsertSort(s_array, s_nArraySize);
   // Sort::BinaryInsertSort(s_array, s_nArraySize);

   // unsigned *c = new unsigned[11];
    //BinaryArray::Add(a, b, 10, c);

    //std::cout << Find::RecusionBinarySearch(s_array, 0, s_nArraySize, 8);
    //std::cout << Find::BinarySearch(s_array, 0, s_nArraySize, 3);

    //std::cout << Find::FindTwoNumber(s_array, s_nArraySize, 8);
   
    //Polynome poly = PolynomeTest::Add();
    //std::cout << poly.ToString();
    //std::cout << poly.GetValue(1);

    //std::cout << Inversion::FindInversion(s_array, s_nArraySize);

    int nLowPos = 0, nHighPos = 0, nMaxValue = 0;
    nMaxValue = MaxSubArray::FindMaxValue(s_array, s_nArraySize, nLowPos, nHighPos);
    std::cout << nMaxValue << std::endl;
    std::cout << nLowPos << std::endl;
    std::cout << nHighPos << std::endl;
    system("pause");
}