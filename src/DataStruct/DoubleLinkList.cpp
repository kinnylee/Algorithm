#include <iostream>

#include "DoubleLinkList.h"

DoubleLinkList::DoubleLinkList()
{
    m_pHead = new DLinkNode;
    m_pHead->m_nData = -1;
    m_pHead->m_pNext = nullptr;
    m_pHead->m_pPrev = nullptr;
}

DoubleLinkList::~DoubleLinkList()
{
    Clear();
    if (nullptr != m_pHead)
    {
        delete m_pHead;
        m_pHead = nullptr;
    }
}

void DoubleLinkList::FrontInsert(int nKey)
{
    DLinkNode *pNode = new DLinkNode;
    pNode->m_nData = nKey;
    pNode->m_pNext = m_pHead->m_pNext;
    pNode->m_pPrev = m_pHead;

    m_pHead->m_pNext = pNode;
}

void DoubleLinkList::TailInsert(int nKey)
{
    DLinkNode *pNode = m_pHead;
    while (nullptr != pNode->m_pNext)
    {
        pNode = pNode->m_pNext;
    }

    DLinkNode *pNewNode = new DLinkNode;
    pNewNode->m_nData = nKey;
    pNewNode->m_pNext = nullptr;
    pNewNode->m_pPrev = pNode;

    pNode->m_pNext = pNewNode;
}

bool DoubleLinkList::Delete(int nKey)
{
    DLinkNode *pNode = m_pHead->m_pNext;
    while (nullptr != pNode && pNode->m_nData != nKey)
    {
        pNode = pNode->m_pNext;
    }
    if (nullptr == pNode)
    {
        return false;
    }
    
    pNode->m_pPrev->m_pNext = pNode->m_pNext;
    pNode->m_pNext->m_pPrev = pNode->m_pPrev;

    delete pNode;
    pNode = nullptr;
    return true;
}

void DoubleLinkList::Clear()
{
    DLinkNode *pNode = m_pHead->m_pNext;
    DLinkNode *pTemp = nullptr;
    while (nullptr != pNode)
    {
        pTemp = pNode;
        pNode = pNode->m_pNext;
        delete pTemp;
        pTemp = nullptr;
    }
    m_pHead->m_pNext = nullptr;
    m_pHead->m_pPrev = nullptr;
}

void DoubleLinkList::PrintOut()
{
    DLinkNode *pNode = m_pHead;
    while (nullptr != pNode->m_pNext)
    {
        std::cout << pNode->m_pNext->m_nData << std::endl;
        pNode = pNode->m_pNext;
    }
    std::cout << std::endl;
}

void DoubleLinkList::IncraseInsert(int nKey)
{
    DLinkNode *pNode = m_pHead->m_pNext;
    //empty link list
    if (nullptr == pNode)
    {
        FrontInsert(nKey);
        return;
    }

    while (nullptr != pNode && pNode->m_nData < nKey)
    {
        pNode = pNode->m_pNext;
    }
    
    if (nullptr == pNode)
    {
        TailInsert(nKey);
    }
    else
    {
        DLinkNode *pNewNode = new DLinkNode;
        pNewNode->m_nData = nKey;

        pNewNode->m_pNext = pNode;
        pNode->m_pPrev->m_pNext = pNewNode;
        pNewNode->m_pPrev = pNode->m_pPrev;
        pNode->m_pPrev = pNode;
    }
}

