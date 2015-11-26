#include "Sort.h"

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
        int nPos = n - 1;
        RecursionInsertSort(a, nPos);
        int key = a[nPos];
        while (nPos >= 0 && a[nPos-1] > key)
        {
            a[nPos] = a[nPos-1];
            nPos--;
        }
        a[nPos] = key;
    }
}

