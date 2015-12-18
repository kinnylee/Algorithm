#ifndef _DOUBLELINKLISTONEPTR_H_
#define _DOUBLELINKLISTONEPTR_H_

#include "DataStruct_Global.h"
#include "DataType.h"

/**
    X^Y^Y == X^(Y^Y) == X^0 == X
    m_pHead->m_pPre == nullptr;
    m_pHead->m_pNext == m_pHead->m_pNext ^ nullptr 
        == m_pHead->m_pNext ^ m_pHead->m_pPre == m_pHead->m_pNP;
*/
class DATASTRUCT_EXPORT DoubleLinkListOnePtr
{
public:
    DoubleLinkListOnePtr();
    ~DoubleLinkListOnePtr();

    void Insert(int nKey);
    void Delete(int nKey);
    DoubleLinkListOnePtr* Search(int nKey);
    bool Empty();

private:
    DLinkNodeOnePtr *m_pHead;
};

#endif