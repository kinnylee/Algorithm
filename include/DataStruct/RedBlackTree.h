#ifndef _REDBLACKTREE_H_
#define _REDBLACKTREE_H_

#include "DataStruct_Global.h"
#include "DataType.h"

class DATASTRUCT_EXPORT RedBlackTree
{
public:
    RedBlackTree(int nRootKey = -1);
    ~RedBlackTree();

private:
    RedBlackNode* NewNode(int nKey, NodeColor color);

private:
    RedBlackNode *m_pRoot;
};
#endif // !_REDBLACKTREE_H_
