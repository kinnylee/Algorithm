#include <process.h>
#include <iostream>

#include "Sort.h"
#include "BinaryArray.h"
#include "Find.h"

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

    std::cout << Find::FindTwoNumber(s_array, s_nArraySize, 8);
    system("pause");
}