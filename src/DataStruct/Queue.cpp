#include <string>

#include "Queue.h"

Queue::Queue(int nSize) : m_nSize(nSize), m_nHead(0), m_nTail(0)
{
    if (m_nSize != 0)
    {
        m_pBuff = new int[m_nSize + 1];
        memset(m_pBuff, 0, m_nSize + 1);
    }
}

Queue::~Queue()
{
    delete[] m_pBuff;
}

void Queue::EnQueue(int x)
{
    if (OverFlow())
    {
        return;
    }

    m_pBuff[m_nTail] = x;
    if (m_nTail == m_nSize)
    {
        m_nTail = 0;
    }
    else
    {
        ++m_nTail;
    }
}

int Queue::DeQueue()
{
    if (Empty())
    {
        return -1;
    }

    int nResult = m_pBuff[m_nHead];
    if (m_nHead == m_nSize)
    {
        m_nHead = 0;
    }
    else
    {
        ++m_nHead;
    }
    return nResult;
}

bool Queue::Empty()
{
    if (m_nHead == m_nTail)
    {
        return true;
    }
    return false;
}

bool Queue::OverFlow()
{
    if (m_nTail == (m_nHead+ 1) % m_nSize)
    {
        return true;
    }
    return false;
}

DoubleQueue::DoubleQueue(int nSize) 
    : m_nSize(nSize)
    , m_nHead(0)
    , m_nTail(0)
{
    m_pBuff = new int[nSize + 1];
    memset(m_pBuff, 0, nSize + 1);
}

DoubleQueue::~DoubleQueue()
{
    delete m_pBuff;
}

bool DoubleQueue::OverFlow()
{
    if (m_nTail == (m_nHead + 1) % m_nSize)
    {
        return true;
    }
    return false;
}

void DoubleQueue::EnQueueHead(int x)
{
    if (OverFlow())
    {
        return;
    }
    m_pBuff[m_nHead] = x;
    if (m_nHead == m_nSize)
    {
        m_nHead = 0;
    }
    else
    {
        ++m_nHead;
    }
}

void DoubleQueue::EnQueueTail(int x)
{
    if (OverFlow())
    {
        return;
    }
    if (m_nTail == 0)
    {
        m_nTail = m_nSize;
    }
    else
    {
        --m_nTail;
    }
    m_pBuff[m_nTail] = x;
}

int DoubleQueue::DeQueueHead()
{
    if (Empty())
    {
        return -1;
    }
    if (m_nHead == 0)
    {
        m_nHead = m_nSize;
    }
    else
    {
        --m_nHead;
    }
    return m_pBuff[m_nHead];
}

int DoubleQueue::DeQueueTail()
{
    if (Empty())
    {
        return -1;
    }
    int nResult = m_pBuff[m_nTail];
    if (m_nTail == m_nSize)
    {
        m_nTail = 0;
    }
    else
    {
        ++m_nTail;
    }
    return nResult;
}

bool DoubleQueue::Empty()
{
    if (m_nHead == m_nTail)
    {
        return true;
    }
    return false;
}
