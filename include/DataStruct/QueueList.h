#ifndef _QUEUElIST_H_
#define _QUEUElIST_H_

#include "DataStruct_Global.h"

class CyclicLinkList;

class DATASTRUCT_EXPORT QueueList
{
public:
    QueueList();
    ~QueueList();

    void EnQueue(int nKey);
    int DeQueue();
    int Length();
    bool Empty();

private:
    CyclicLinkList *m_pList;
};

#endif