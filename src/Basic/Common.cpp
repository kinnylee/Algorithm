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

int Common::Digit(int a, int *digit)
{
    digit[0] = a / DecadePower(4);
    for (int i = 1; i <=4; ++i)
    {
        int nSum = 0;
        for (int j = 0; j < i; ++j)
        {
            nSum += digit[j]*DecadePower(i - j);
        }

        digit[i] = a / DecadePower(4- i) - nSum;
    }
    for (int i = 0; i < 4; ++i)
    {
        if (digit[i] != 0)
        {
            return 5 - i;
        }
    }
    return 0;
}

int Common::Digit(int a, int nPos)
{
    int *digit = new int[4];
    Digit(a, digit);
    int result = digit[nPos];
    delete[] digit;
    return result;
}

int Common::DecadePower(int n)
{
    int nSum = 1;
    for (int i = 1; i <= n; ++i)
    {
        nSum *= 10;
    }
    return nSum;
}

