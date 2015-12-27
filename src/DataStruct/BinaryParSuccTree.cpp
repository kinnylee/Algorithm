#include "BinaryParSuccTree.h"

BinaryParSuccTree::BinaryParSuccTree(int nRootKey /*= -1*/)
{
    if (nRootKey != -1)
    {
        m_pRoot = NewNode(nRootKey);
        ++m_nSize;
    }
}

BinaryParSuccTree::~BinaryParSuccTree()
{

}

BParSuccTreeNode* BinaryParSuccTree::Search(int nKey)
{
    return nullptr;
}

BParSuccTreeNode* BinaryParSuccTree::Insert(int nKey)
{
    BParSuccTreeNode *pNewNode = NewNode(nKey);
    return pNewNode;
}

void BinaryParSuccTree::Delete(BParSuccTreeNode *pNode)
{

}

void BinaryParSuccTree::Delete(int nKey)
{

}

BParSuccTreeNode* BinaryParSuccTree::NewNode(int nKey)
{
    BParSuccTreeNode *pNewNode = new BParSuccTreeNode;
    pNewNode->m_nData = nKey;
    pNewNode->m_pParent = pNewNode->m_pSuccessor = nullptr;
    return pNewNode;
}

