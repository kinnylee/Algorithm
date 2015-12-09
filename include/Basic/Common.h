#ifndef _COMMON_H_
#define _COMMON_H_

#include "Basic_Global.h"

class BASIC_EXPORT Common
{
public:
    void static Swap(int &a, int &b);
    int static RandInt(int nMin, int nMax);
    int static Median(int a, int b, int c);
    int static DecadePower(int n);
    int static Digit(int a, int *digit);
    int static Digit(int a, int nPos);
};

#endif