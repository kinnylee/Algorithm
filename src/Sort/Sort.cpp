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

