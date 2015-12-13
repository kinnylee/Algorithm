#include "QueueDoubleStack.h"

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
