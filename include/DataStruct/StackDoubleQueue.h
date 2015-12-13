#ifndef _STACKDOUBLEQUEUE_H_
#define _STACKDOUBLEQUEUE_H_

#include "DataStruct_Global.h"
#include "Queue.h"

class DATASTRUCT_EXPORT StackDoubleQueue
{
public:
    StackDoubleQueue(int nSize);
    ~StackDoubleQueue();

    int Size();
    bool Empty();
    bool OverFlow();
    void Push(int x);
    int Pop();

private:
    int m_nSize;
    Queue *m_pLQueue;
    Queue *m_pRQueue;
    bool m_bLeft; // flag mark the main queue
};

#endif