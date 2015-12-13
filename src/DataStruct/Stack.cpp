#include "Stack.h"

Stack::Stack(int nSize) : m_nSize(nSize), m_nTop(-1)
{
    m_pBuff = new int[m_nSize];
}

Stack::~Stack()
{
    delete[] m_pBuff;
}

void Stack::Push(int x)
{
    if (OverFlow())
    {
        return;
    }
    m_pBuff[++m_nTop] = x;
}

int Stack::Pop()
{
    if (Empty())
    {
        return -1;
    }
    return m_pBuff[m_nTop--];
}

bool Stack::Empty()
{
    if (m_nTop == -1)
    {
        return true;
    }
    return false;
}

bool Stack::OverFlow()
{
    if (m_nTop == m_nSize - 1)
    {
        return true;
    }
    return false;
}

int Stack::Size()
{
    return m_nTop + 1;
}

DoubleStack::DoubleStack(int nSize) 
    : m_nSize(nSize)
    , m_nLeftTop(-1)
    , m_nRightTop(nSize)
{
    m_pBuff = new int[nSize];
}

DoubleStack::~DoubleStack()
{
    delete[] m_pBuff;
}

void DoubleStack::PushLeft(int x)
{
    if (Empty())
    {
        return;
    }
    m_pBuff[++m_nLeftTop] = x;
}

int DoubleStack::PopLeft()
{
    if (m_nLeftTop == -1)
    {
        return -1;
    }
    return m_pBuff[m_nLeftTop--];
}

void DoubleStack::PushRight(int x)
{
    if (Empty())
    {
        return;
    }
    m_pBuff[--m_nRightTop] = x;
}

int DoubleStack::PopRight()
{
    if (m_nRightTop == m_nSize)
    {
        return -1;
    }
    return m_pBuff[m_nRightTop++];
}

bool DoubleStack::Empty()
{
    if (m_nLeftTop + 1 == m_nRightTop)
    {
        return true;
    }
    return false;
}

int DoubleStack::Size()
{
    int nLeft = m_nSize - m_nLeftTop + 1;
    int nRight = m_nSize - m_nRightTop;
    return nLeft + nRight;
}
