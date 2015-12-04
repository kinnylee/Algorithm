#ifndef _COMMON_H_
#define _COMMON_H_

#include "Basic_Global.h"

class BASIC_EXPORT Common
{
public:
    void static Swap(int &a, int &b);
    int static RandInt(int nMin, int nMax);
};

#endif