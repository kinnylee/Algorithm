#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "DataStruct_Global.h"

class DATASTRUCT_EXPORT Queue
{
public:
    /**
        brief: buff length is nSize + 1;
    */
    Queue(int nSize);
    ~Queue();

    void EnQueue(int x);
    int DeQueue();
    bool Empty();
    bool OverFlow();

private:
    int m_nSize;
    int m_nHead;
    int m_nTail;
    int *m_pBuff;
};

class DATASTRUCT_EXPORT DoubleQueue
{
public:
    DoubleQueue(int nSize);
    ~DoubleQueue();

    bool Empty();
    bool OverFlow();
    void EnQueueHead(int x);
    void EnQueueTail(int x);
    int DeQueueHead();
    int DeQueueTail();

private:
    int m_nSize;
    int *m_pBuff;
    int m_nHead;
    int m_nTail;
};
#endif