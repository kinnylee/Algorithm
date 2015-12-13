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

#endif