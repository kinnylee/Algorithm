#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#include "DataStruct_Global.h"

class DATASTRUCT_EXPORT LinkList
{
public:
    LinkList();
    ~LinkList();

    void InitHead();
    void FrontInsert(int key);
    void TailInsert(int key);
    LinkList* Search(int key);
    void Delete(int key);
    void DeleteNodeMove(LinkList *pNode);
    void DeleteNodeTraval(LinkList *pNode);
    void DeleteTail();
    void Clear();
    void PrintOut();

public:
    int m_nData;
    LinkList *m_pNext;

private:
    LinkList *m_pHead;
};

#endif