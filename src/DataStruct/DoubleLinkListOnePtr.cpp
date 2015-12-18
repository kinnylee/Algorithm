#include "DoubleLinkListOnePtr.h"

DoubleLinkListOnePtr::DoubleLinkListOnePtr()
{
    m_pHead = new DLinkNodeOnePtr;
    m_pHead->m_nData = -1;
    m_pHead->m_pNP = 0;
}

DoubleLinkListOnePtr::~DoubleLinkListOnePtr()
{
    if (nullptr != m_pHead)
    {
        delete m_pHead;
        m_pHead = nullptr;
    }
}

void DoubleLinkListOnePtr::Insert(int nKey)
{

}

void DoubleLinkListOnePtr::Delete(int nKey)
{

}

DoubleLinkListOnePtr* DoubleLinkListOnePtr::Search(int nKey)
{
    return nullptr;
}

bool DoubleLinkListOnePtr::Empty()
{
    return m_pHead->m_pNP == nullptr;
}

