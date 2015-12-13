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

int Queue::Size()
{
    if (m_nHead > m_nTail)
    {
        return m_nHead - m_nTail;
    }
    else
    {
        return m_nSize - (m_nTail - m_nHead);
    }
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

int DoubleQueue::Size()
{
    if (m_nHead > m_nTail)
    {
        return m_nHead - m_nTail;
    }
    else
    {
        return m_nSize - (m_nTail - m_nHead);
    }
}

QueueDoubleStack::QueueDoubleStack(int nSize) : m_nSize(nSize)
{
    m_lStack = new Stack(nSize);
    m_RStack = new Stack(nSize);
}

QueueDoubleStack::~QueueDoubleStack()
{
    if (nullptr != m_lStack)
    {
        delete m_lStack;
        m_lStack = nullptr;
    }
    if (nullptr != m_RStack)
    {
        delete m_RStack;
        m_RStack = nullptr;
    }
}

bool QueueDoubleStack::Empty()
{
    if (m_lStack->Empty() && m_RStack->Empty())
    {
        return true;
    }
    return false;
}

bool QueueDoubleStack::OverFlow()
{
    if (m_lStack->OverFlow() || m_RStack->OverFlow())
    {
        return true;
    }
    return false;
}

void QueueDoubleStack::EnQueue(int x)
{
    m_lStack->Push(x);
}

int QueueDoubleStack::DeQueue()
{
    //all the number at left stack pop into right stack except the last one
    while (m_lStack->Size() > 1)
    {
        m_RStack->Push(m_lStack->Pop());
    }
    //return the last number of left stack
    int nResult = m_lStack->Pop();

    // pop all the number at right stack and push to the left stack
    while (!m_RStack->Empty())
    {
        m_lStack->Push(m_RStack->Pop());
    }
    return nResult;
}

int QueueDoubleStack::Size()
{
    return m_lStack->Size();
}
