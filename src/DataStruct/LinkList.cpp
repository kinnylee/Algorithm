#include <iostream>
#include "LinkList.h"

LinkList::LinkList()
{
    m_pHead = nullptr;
    m_pNext = nullptr;
}

LinkList::~LinkList()
{
    
}

void LinkList::FrontInsert(int key)
{
    if (nullptr == m_pHead)
    {
        InitHead();
    }

    LinkList *pNode = new LinkList;
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
    if (nullptr == m_pHead)
    {
        InitHead();
    }

    LinkList *pNode = new LinkList;
    pNode->m_nData = key;
    pNode->m_pNext = nullptr;

    LinkList *pTemp = m_pHead;
    while (nullptr != pTemp->m_pNext)
    {
        pTemp = pTemp->m_pNext;
    }
    pTemp->m_pNext = pNode;
}

LinkList* LinkList::Search(int key)
{
    LinkList *pTemp = m_pHead->m_pNext;
    while (nullptr != pTemp && pTemp->m_nData != key)
    {
        pTemp = pTemp->m_pNext;
    }
    return pTemp;
}

void LinkList::Delete(int key)
{
    LinkList *pPre = m_pHead;
    LinkList *pCurr = m_pHead->m_pNext;
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
    LinkList *pNode = m_pHead->m_pNext;
    LinkList *pTemp = nullptr;
    while (pNode != nullptr)
    {
        pTemp = pNode;
        pNode = pNode->m_pNext;

        delete pTemp;
        pTemp = nullptr;
    }
}

void LinkList::PrintOut()
{
    LinkList *pNode = m_pHead->m_pNext;
    while (pNode != nullptr)
    {
        std::cout << pNode->m_nData << " ";
        pNode = pNode->m_pNext;
    }
    std::cout << std::endl;
}

void LinkList::InitHead()
{
    m_pHead = new LinkList;
    m_pHead->m_pNext = nullptr;
}

