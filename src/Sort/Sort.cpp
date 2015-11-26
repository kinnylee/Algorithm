#include "Sort.h"
#include "Find.h"

void Sort::InsertSort(int a[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int key = a[i];
        
        //insert a[i] to right position
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            --j;
        }

        a[j + 1] = key;
    }
}

void Sort::RecursionInsertSort(int a[], int n)
{
    if (n > 1)
    {
        RecursionInsertSort(a, n - 1);
        RecursionInsertSortSub(a, n - 1);
    }
}

void Sort::RecursionInsertSortSub(int a[], int nPos)
{
    int key = a[nPos];
    while (nPos >= 0 && a[nPos - 1] > key)
    {
        a[nPos] = a[nPos - 1];
        nPos--;
    }
    a[nPos] = key;
}

void Sort::SelectSort(int a[], int n)
{

}

void Sort::MergeSort(int a[], int n)
{

}

void Sort::MergeSub(int a[], int nLow, int nHigh)
{

}

void Sort::Merge(int a[], int p, int q, int r)
{
    
}

void Sort::BinaryInsertSort(int a[], int n)
{
    for (int j = 1; j < n; ++j)
    {
        int key = a[j];
        int i = j - 1;
        int nPos = Find::BinaryLocation(a, 0, i, key);
        while (nPos <= i)
        {
            a[i+1] = a[i];
            i--;
        }
        a[nPos] = key;
    }
}

