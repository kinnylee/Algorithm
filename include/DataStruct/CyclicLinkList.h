#ifndef _CYCLICLINKLIST_H_
#define _CYCLICLINKLIST_H_

#include <DataStruct_Global.h>
#include "DataType.h"

class DATASTRUCT_EXPORT CyclicLinkList
{
public:
    CyclicLinkList();
    ~CyclicLinkList();

    void TailInsert(int nKey);
    void FrontInsert(int nKey);
    void InceraseInsert(int nKey);

    LinkNode* Search(int nKey);

    void Delete(int nKey);
    void DeleteFront();

    int TailValue();
    int FrontValue();

    int Length();
    bool Empty();

    void PrintOut();

private:
    LinkNode *m_pHead;
    LinkNode *m_pTail; 
    int m_nLength;
};

#endif