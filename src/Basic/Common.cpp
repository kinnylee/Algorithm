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
    srand(time_t(NULL));
    return rand() % (nMax - nMin) + nMin;
}

