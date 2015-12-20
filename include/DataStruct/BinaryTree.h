#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

#include "DataStruct_Global.h"
#include "DataType.h"

class DATASTRUCT_EXPORT BinaryTree
{
public:
    BinaryTree(int nRoot = -1);
    ~BinaryTree();

    BTreeNode* InsertLeftNode(BTreeNode *pNode, int nKey);
    BTreeNode* InsertRightNode(BTreeNode *pNode, int nKey);
    void PreOrder();
    void InOrder();
    void PostOrder();

    void NonRecPreOrder();
    void NonRecInOrder();
    void NonRecPostOrder();

    void Clear();

    BTreeNode* Root();

private:
    void PrePrint(BTreeNode *pNode);
    void InPrint(BTreeNode *pNode);
    void PostPrint(BTreeNode *pNode);

private:
    BTreeNode *m_pRoot;
};

#endif