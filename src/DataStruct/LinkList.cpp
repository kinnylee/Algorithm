#include <iostream>
#include "LinkList.h"

LinkList::LinkList()
{
    m_pHead = new LinkNode;
    m_pHead->m_nData = -1;
    m_pHead->m_pNext = nullptr;
}

LinkList::~LinkList()
{
    Clear();
    if (nullptr != m_pHead)
    {
        delete m_pHead;
        m_pHead = nullptr;
    }
}

void LinkList::FrontInsert(int key)
{
    LinkNode *pNode = new LinkNode;
    pNode->m_nData = key;
    if (nullptr == m_pHead)
    {
        pNode->m_pNext = nullptr;
    }
    else
    {
        pNode->m_pNext = m_pHead->m_pNext;
    }

    m_pHead->m_pNext = pNode;
}

void LinkList::TailInsert(int key)
{
    LinkNode *pNode = new LinkNode;
    pNode->m_nData = key;
    pNode->m_pNext = nullptr;

    LinkNode *pTemp = m_pHead;
    while (nullptr != pTemp->m_pNext)
    {
        pTemp = pTemp->m_pNext;
    }
    pTemp->m_pNext = pNode;
}

LinkNode* LinkList::Search(int key)
{
    LinkNode *pTemp = m_pHead->m_pNext;
    while (nullptr != pTemp && pTemp->m_nData != key)
    {
        pTemp = pTemp->m_pNext;
    }
    return pTemp;
}

void LinkList::Delete(int key)
{
    LinkNode *pPre = m_pHead;
    LinkNode *pCurr = m_pHead->m_pNext;
    while (nullptr != pCurr && key != pCurr->m_nData)
    {
        pPre = pCurr;
        pCurr = pCurr->m_pNext;
    }
    if (nullptr != pCurr)
    {
        pPre->m_pNext = pCurr->m_pNext;
        delete pCurr;
        pCurr = nullptr;
    }
}

void LinkList::Clear()
{
    LinkNode *pNode = m_pHead->m_pNext;
    LinkNode *pTemp = nullptr;
    while (pNode != nullptr)
    {
        pTemp = pNode;
        pNode = pNode->m_pNext;

        delete pTemp;
        pTemp = nullptr;
    }
    m_pHead->m_pNext = nullptr;
}

void LinkList::PrintOut()
{
    LinkNode *pNode = m_pHead->m_pNext;
    while (pNode != nullptr)
    {
        std::cout << pNode->m_nData << " ";
        pNode = pNode->m_pNext;
    }
    std::cout << std::endl;
}

void LinkList::DeleteNodeMove(LinkNode *pNode)
{
    if (nullptr == pNode)
    {
        return;
    }

    if (nullptr != pNode->m_pNext)
    {
        LinkNode *pNext = pNode->m_pNext;
        pNode->m_nData = pNext->m_nData;
        pNode->m_pNext = pNext->m_pNext;
        delete pNext;
        pNext = nullptr;
    }
    else
    {
        DeleteTail();
    }
}

void LinkList::DeleteNodeTraval(LinkNode *pNode)
{
    LinkNode *pPre = m_pHead;
    LinkNode *pCurr = m_pHead->m_pNext;

    while (pCurr->m_pNext != nullptr && pCurr != pNode)
    {
        pPre = pCurr;
        pCurr = pCurr->m_pNext;
    }

    if (pCurr != nullptr)
    {
        pPre->m_pNext = pCurr->m_pNext;
        delete pCurr;
        pCurr = nullptr;
    }
}

void LinkList::DeleteTail()
{
    LinkNode *pPre = m_pHead;
    LinkNode *pCurr = m_pHead->m_pNext;

    while (pCurr->m_pNext != nullptr)
    {
        pPre = pCurr;
        pCurr = pCurr->m_pNext;
    }

    pPre->m_pNext = nullptr;
    delete pCurr;
    pCurr = nullptr;
}

void LinkList::DeleteFront()
{
    LinkNode *pNode = m_pHead->m_pNext;
    if (nullptr != pNode)
    {
        m_pHead->m_pNext = pNode->m_pNext;
        delete pNode;
        pNode = nullptr;
    }
}

int LinkList::First()
{
    if (nullptr == m_pHead->m_pNext)
    {
        return -1;
    }
    return m_pHead->m_pNext->m_nData;
}

bool LinkList::Empty()
{
    return m_pHead->m_pNext == nullptr;
}

