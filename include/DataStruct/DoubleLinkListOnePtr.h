#ifndef _DOUBLELINKLISTONEPTR_H_
#define _DOUBLELINKLISTONEPTR_H_

#include "DataStruct_Global.h"
#include "DataType.h"

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