#include "Stack.h"

Stack::Stack(int nSize) : m_nSize(nSize), m_nTop(0)
{
    m_pBuff = new int[m_nSize];
}

Stack::~Stack()
{
    delete[] m_pBuff;
}

void Stack::Push(int x)
{
    if (m_nTop == m_nSize)
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
    if (m_nTop == 0)
    {
        return true;
    }
    return false;
}
