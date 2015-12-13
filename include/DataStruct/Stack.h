#ifndef _STATCK_H_
#define _STATCK_H_

#include "DataStruct_Global.h"

class DATASTRUCT_EXPORT Stack
{
public:
    Stack(int nSize);
    ~Stack();

    void Push(int x);
    int Pop();
    bool Empty();

private:
    int m_nSize;
    int m_nTop;
    int *m_pBuff;
};
#endif
