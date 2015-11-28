#include <iostream>

#include "Sort.h"
#include "SortTest.h"

int const s_nArraySize = 10;
int s_array[s_nArraySize] = { 5, 0, 3, 9, 4, 8, 7, 1, 2, 6 };

void SortTest::InsertSortTest()
{
    Sort::InsertSort(s_array, s_nArraySize);
    PrintOut();
}

SortTest::SortTest()
{
    
}

void SortTest::PrintOut()
{
    for (int i = 0; i < s_nArraySize; ++i)
    {
        std::cout << s_array[i] << " ";
    }
    std::cout << std::endl;
}

void SortTest::RecursionInsertSortTest()
{
    Sort::RecursionInsertSort(s_array, s_nArraySize);
    PrintOut();
}

void SortTest::BinaryInsertSortTest()
{
    Sort::BinaryInsertSort(s_array, s_nArraySize);
    PrintOut();
}

void SortTest::MergeSortTest()
{
    Sort::MergeSort(s_array, s_nArraySize);
    PrintOut();
}

void SortTest::MergeInsertSortTest()
{
    Sort::MergeInsertSort(s_array, s_nArraySize);
    PrintOut();
}

