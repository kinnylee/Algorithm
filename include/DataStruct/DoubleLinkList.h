#ifndef _DOUBLE_LINKLIST_H_
#define _DOUBLE_LINKLIST_H_

#include "DataStruct_Global.h"
#include "DataType.h"

class DATASTRUCT_EXPORT DoubleLinkList
{
public:
    DoubleLinkList();
    ~DoubleLinkList();

    void FrontInsert(int nKey);
    void TailInsert(int nKey);
    void IncraseInsert(int nKey);
    bool Delete(int nKey);
    void Clear();
    void PrintOut();

private:
    DLinkNode *m_pHead;
};

#endif