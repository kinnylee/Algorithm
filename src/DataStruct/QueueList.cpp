#include "QueueList.h"
#include "CyclicLinkList.h"

QueueList::QueueList()
{
    m_pList = new CyclicLinkList;
}

QueueList::~QueueList()
{
    if (nullptr != m_pList)
    {
        delete m_pList;
        m_pList = nullptr;
    }
}

void QueueList::EnQueue(int nKey)
{
    m_pList->TailInsert(nKey);
}

int QueueList::DeQueue()
{
    int nResult = m_pList->FrontValue();
    m_pList->DeleteFront();
    return nResult;
}

int QueueList::Length()
{
    return m_pList->Length();
}

bool QueueList::Empty()
{
    return m_pList->Empty();
}

