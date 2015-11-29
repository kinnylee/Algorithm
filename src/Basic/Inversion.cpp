#include "Inversion.h"

int Inversion::FindInversion(int a[], int n)
{
    int nResult = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                ++nResult;
            }
        }
    }
    return nResult;
}

