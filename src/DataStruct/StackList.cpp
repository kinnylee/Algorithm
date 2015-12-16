#include "StackList.h"
#include "LinkList.h"

StackList::StackList()
{
    m_pList = new LinkList;
}

StackList::~StackList()
{
    if (nullptr != m_pList)
    {
        delete m_pList;
        m_pList = nullptr;
    }
}

void StackList::Push(int nKey)
{
    m_pList->FrontInsert(nKey);
}

int StackList::Pop()
{
    if (Empty())
    {
        return -1;
    }
    int nResult = m_pList->First();
    m_pList->DeleteFront();
    return nResult;
}

bool StackList::Empty()
{
    return m_pList->Empty();
}

