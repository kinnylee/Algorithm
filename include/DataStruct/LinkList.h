#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#include "DataStruct_Global.h"

typedef struct LinkNode
{
    int m_nData;
    LinkNode *m_pNext;
}LinkNode;

class DATASTRUCT_EXPORT LinkList
{
public:
    LinkList();
    ~LinkList();

    void FrontInsert(int key);
    void TailInsert(int key);
    LinkNode* Search(int key);
    int First();
    void Delete(int key);
    void DeleteNodeMove(LinkNode *pNode);
    void DeleteNodeTraval(LinkNode *pNode);
    void DeleteTail();
    void DeleteFront();
    void Clear();
    bool Empty();
    void PrintOut();

private:
    LinkNode *m_pHead;
};

#endif