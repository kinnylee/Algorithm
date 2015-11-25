#include <iostream>
#include "BinaryArray.h"

bool BinaryArray::Add(unsigned a[], unsigned b[], int n, unsigned aplusb[])
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] >1 || a[i] < 0 || b[i] > 1 || b[i] < 0)
        {
            return false;
        }
    }

    unsigned move = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        unsigned temp = a[i] + b[i] + move;

        if (temp > 1)
        {
            aplusb[i + 1] = temp % 2;
            move = 1;
        }
        else
        {
            aplusb[i+1] = temp;
            move = 0;
        }
    }
    aplusb[0] = move;
    PrintOut(aplusb, 11);
    return true;
}

void BinaryArray::PrintOut(unsigned a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

