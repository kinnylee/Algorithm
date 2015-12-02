#ifndef _PRIORITYQUEUEHEAP_H_
#define _PRIORITYQUEUEHEAP_H_

#include "DataStruct_Global.h"

class DATASTRUCT_EXPORT PriorityQueueHeap
{
public:
    PriorityQueueHeap(int nMaxSize);
    ~PriorityQueueHeap();

    int HeapMaimum();
    int HeapExtractMax();
    void MaxHeapify(int nIndex);
    void MaxIncreaseKey(int nIndex, int nKey);
    void MaxHeapInsert(int nKey);

private:
    int m_nHeapSize;
    int m_nMaxSize;
    int *m_pHeap;
};

#endif