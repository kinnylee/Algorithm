#include "KGlobal.h"
#include "Common.h"

#include "PriorityQueueHeap.h"

PriorityQueueHeap::PriorityQueueHeap(int nMaxSize)
    : m_nMaxSize(nMaxSize)
    , m_nHeapSize(0)
{
    m_pHeap = new int[m_nMaxSize];
}

PriorityQueueHeap::~PriorityQueueHeap()
{
    if (m_pHeap)
    {
        delete m_pHeap;
        m_pHeap = nullptr;
    }
}

int PriorityQueueHeap::HeapMaimum()
{
    return m_pHeap[0];
}

int PriorityQueueHeap::HeapExtractMax()
{
    if (m_nHeapSize < 1)
    {
        return -1;
    }
    int nMax = m_pHeap[0];
    m_pHeap[0] = m_pHeap[m_nHeapSize--];
    MaxHeapify(0);
    return nMax;
}

void PriorityQueueHeap::MaxHeapify(int nIndex)
{
    int nPIndex = nIndex > 1;
    if (nIndex > 0 && nPIndex > 0 && m_pHeap[nPIndex] < m_pHeap[nIndex])
    {
        Common::Swap(m_pHeap[nPIndex], m_pHeap[nIndex]);
        MaxHeapify(nPIndex);
    }
}

void PriorityQueueHeap::MaxIncreaseKey(int nIndex, int nKey)
{   
    if (nIndex < 0)
    {
        return;
    }
    
    if (nKey < m_pHeap[nIndex])
    {
        return;
    }

    m_pHeap[nIndex] = nKey;
    MaxHeapify(nIndex);
}

void PriorityQueueHeap::MaxHeapInsert(int nKey)
{
    if (m_nHeapSize == m_nMaxSize)
    {
        return;
    }
    m_pHeap[++m_nHeapSize] = g_MinumInt;
    MaxIncreaseKey(m_nHeapSize, nKey);
}

