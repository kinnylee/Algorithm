#include "StackDoubleQueue.h"

StackDoubleQueue::StackDoubleQueue(int nSize)
    : m_nSize(nSize)
    , m_bLeft(true)
{
    m_pLQueue = new Queue(nSize);
    m_pRQueue = new Queue(nSize);
}

StackDoubleQueue::~StackDoubleQueue()
{
    if (nullptr != m_pLQueue)
    {
        delete m_pLQueue;
        m_pLQueue = nullptr;
    }

    if (nullptr != m_pRQueue)
    {
        delete m_pRQueue;
        m_pRQueue = nullptr;
    }
}

int StackDoubleQueue::Size()
{
    if (m_bLeft)
    {
        return m_pLQueue->Size();
    }
    else
    {
        return m_pRQueue->Size();
    }
}

bool StackDoubleQueue::Empty()
{
    if (m_bLeft)
    {
        return m_pLQueue->Empty();
    }
    else
    {
        return m_pRQueue->Empty();
    }
}

bool StackDoubleQueue::OverFlow()
{
    if (m_bLeft)
    {
        return m_pLQueue->OverFlow();
    }
    else
    {
        return m_pRQueue->OverFlow();
    }
}

void StackDoubleQueue::Push(int x)
{
    if (m_bLeft)
    {
        m_pLQueue->EnQueue(x);
    }
    else
    {
        m_pRQueue->EnQueue(x);
    }
}

int StackDoubleQueue::Pop()
{
    int nResult = -1;

    if (m_bLeft)
    {
        while (m_pLQueue->Size() > 1)
        {
            m_pRQueue->EnQueue(m_pLQueue->DeQueue());
        }
        nResult = m_pLQueue->DeQueue();
        m_bLeft = false;
    }
    else
    {
        while (m_pRQueue->Size() > 1)
        {
            m_pLQueue->EnQueue(m_pRQueue->DeQueue());
        }
        nResult = m_pRQueue->DeQueue();
        m_bLeft = true;
    }
      return nResult;
}
