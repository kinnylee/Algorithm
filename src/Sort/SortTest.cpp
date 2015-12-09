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

void SortTest::BubbleSortTest()
{
    Sort::BubbleSort(s_array, s_nArraySize);
    PrintOut();
}

void SortTest::HeapSortTest()
{
    Sort::HeapSort(s_array, s_nArraySize);
    PrintOut();
}

void SortTest::QuickSortTest()
{
    Sort::QuickSort(s_array, s_nArraySize);
    PrintOut();
}

void SortTest::RandQuickSortTest()
{
    Sort::RandQuickSort(s_array, s_nArraySize);
    PrintOut();
}

void SortTest::QuickInsertSortTest()
{
    Sort::QuickInsertSort(s_array, s_nArraySize);
    PrintOut();
}

void SortTest::QuicMedianSortTest()
{
    Sort::QuickMedianSort(s_array, s_nArraySize);
    PrintOut();
}

void SortTest::TailRecursiveQuickSortTest()
{
    Sort::TailRecursiveQuickSort(s_array, s_nArraySize);
    PrintOut();
}

