#ifndef _STACKLIST_H_
#define _STACKLIST_H_

#include "DataStruct_Global.h"

class LinkList;

class DATASTRUCT_EXPORT StackList
{
public:
    StackList();
    ~StackList();

    void Push(int nKey);
    int Pop();
    bool Empty();

private:
    LinkList *m_pList;
};

#endif