#ifndef _STATCK_H_
#define _STATCK_H_

#include "DataStruct_Global.h"
#include "Queue.h"

class DATASTRUCT_EXPORT Stack
{
public:
    Stack(int nSize);
    ~Stack();

    void Push(int x);
    int Pop();
    bool Empty();
    bool OverFlow();
    int Size();

private:
    int m_nSize;
    int m_nTop;
    int *m_pBuff;
};


class DATASTRUCT_EXPORT DoubleStack
{
public:
    DoubleStack(int nSize);
    ~DoubleStack();

    void PushLeft(int x);
    int PopLeft();
    void PushRight(int x);
    int PopRight();
    bool Empty();
    int Size();

private:
    int m_nSize;
    int m_nLeftTop;
    int m_nRightTop;
    int *m_pBuff;
};



#endif
