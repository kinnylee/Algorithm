#include <stdlib.h>

#include "Common.h"

void Common::Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int Common::RandInt(int nMin, int nMax)
{
    return rand() % (nMax - nMin + 1) + nMin;
}

int Common::Median(int a, int b, int c)
{
    int nResult = 0;
    if (a > b)
    {
        if (b > c)
        {
            nResult = b;
        }
        else 
        {
            if (a > c)
            {
                nResult = c;
            }
            else
            {
                nResult = a;
            }
        }
    }
    else
    {
        if (a > c)
        {
            nResult = a;
        }
        else
        {
            if (b > c)
            {
                nResult = c;
            }
            else
            {
                nResult = b;
            }
        }
    }
    return nResult;
}

