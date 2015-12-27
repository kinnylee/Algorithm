#include "RedBlackTree.h"

RedBlackTree::RedBlackTree(int nRootKey /*= -1*/)
{
    if (nRootKey != -1)
    {
        m_pRoot = NewNode(nRootKey, black);
    }
    else
    {
        m_pRoot = nullptr;
    }
}

RedBlackTree::~RedBlackTree()
{

}

RedBlackNode* RedBlackTree::NewNode(int nKey, NodeColor color)
{
    RedBlackNode *pNewNode = new RedBlackNode;
    pNewNode->m_nData = nKey;
    pNewNode->m_nColor = color;
    pNewNode->m_pLeft = pNewNode->m_pRight = pNewNode->m_pParent = nullptr;
    return pNewNode;
}

