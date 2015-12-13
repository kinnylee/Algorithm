#include <string>

#include "Queue.h"

Queue::Queue(int nSize) : m_nSize(nSize), m_nHead(0), m_nTail(0)
{
    if (m_nSize != 0)
    {
        m_pBuff = new int[m_nSize + 1];
        memset(m_pBuff, 0, m_nSize);
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
    if (m_nHead == (m_nTail + 1) % (m_nSize + 1))
    {
        return true;
    }
    return false;
}
