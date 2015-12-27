#ifndef _BINARYPARSUCCTREE_H_
#define _BINARYPARSUCCTREE_H_

#include "DataStruct_Global.h"
#include "DataType.h"

class DATASTRUCT_EXPORT BinaryParSuccTree
{
public:
    BinaryParSuccTree(int nRootKey = -1);
    ~BinaryParSuccTree();

    BParSuccTreeNode* Search(int nKey);
    BParSuccTreeNode* Insert(int nKey);
    void Delete(BParSuccTreeNode *pNode);
    void Delete(int nKey);

private:
    BParSuccTreeNode* NewNode(int nKey);

private:
    BParSuccTreeNode *m_pRoot;
    int m_nSize;
};
#endif // !_BINARYPARSUCCTREE_H_
