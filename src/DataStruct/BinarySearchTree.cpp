#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(int nRootData)
{
    if (nRootData != -1)
    {
        m_pRoot = new BSearchTreeNode;
        m_pRoot->m_nData = nRootData;
        m_pRoot->m_pLeft = nullptr;
        m_pRoot->m_pRight = nullptr;
        m_pRoot->m_pParent = nullptr;
    }
}

BinarySearchTree::~BinarySearchTree()
{
    if (nullptr != m_pRoot)
    {
        delete m_pRoot;
        m_pRoot = nullptr;
    }
}

BSearchTreeNode* BinarySearchTree::CursionSearch(int nKey)
{
    return CursionSearch(m_pRoot, nKey);
}

BSearchTreeNode* BinarySearchTree::CursionSearch(BSearchTreeNode *pNode, int nKey)
{
    if (pNode == nullptr || nKey == pNode->m_nData)
    {
        return pNode;
    }

    if (nKey < pNode->m_nData)
    {
        return CursionSearch(pNode->m_pLeft, nKey);
    }
    else
    {
        return CursionSearch(pNode->m_pRight, nKey);
    }
}

BSearchTreeNode* BinarySearchTree::Search(int nKey, BSearchTreeNode *pNode/* = nullptr*/)
{
    if (nullptr == pNode)
    {
        pNode = m_pRoot;
    }

    while (nullptr != pNode)
    {
        if (nKey == pNode->m_nData)
        {
            return pNode;
        }
        else if (nKey < pNode->m_nData)
        {
            pNode = pNode->m_pLeft;
        }
        else
        {
            pNode = pNode->m_pRight;
        }
    }
    return pNode;
}

BSearchTreeNode* BinarySearchTree::Minimum(BSearchTreeNode *pNode)
{
    if (nullptr == pNode)
    {
        pNode = m_pRoot;
    }
    while (nullptr != pNode->m_pLeft)
    {
        pNode = pNode->m_pLeft;
    }
    return pNode;
}

BSearchTreeNode* BinarySearchTree::Maximum(BSearchTreeNode *pNode)
{
    if (nullptr == pNode)
    {
        pNode = m_pRoot;
    }
    while (nullptr != pNode->m_pRight)
    {
        pNode = pNode->m_pRight;
    }
    return pNode;
}

BSearchTreeNode* BinarySearchTree::Successor(BSearchTreeNode *pNode)
{
    if (nullptr != pNode->m_pRight)
    {
        return Minimum(pNode->m_pRight);
    }

    BSearchTreeNode *pParent = pNode->m_pParent;
    while (nullptr != pParent && pNode == pParent->m_pRight)
    {
        pNode = pParent;
        pParent = pNode->m_pParent;
    }
    return pParent;
}

BSearchTreeNode* BinarySearchTree::CursionMinimum(BSearchTreeNode *pNode /*= nullptr*/)
{
    if (nullptr == pNode)
    {
        pNode = m_pRoot;
    }
    return CursionMinimumSub(pNode);
}

BSearchTreeNode* BinarySearchTree::CursionMaximum(BSearchTreeNode *pNode /*= nullptr*/)
{
    if (nullptr == pNode)
    {
        pNode = m_pRoot;
    }
    return CursionMaximumSub(pNode);
}

BSearchTreeNode* BinarySearchTree::CursionMinimumSub(BSearchTreeNode *pNode)
{
    if (nullptr == pNode->m_pLeft)
    {
        return pNode;
    }
    return CursionMinimumSub(pNode->m_pLeft);
}

BSearchTreeNode* BinarySearchTree::CursionMaximumSub(BSearchTreeNode *pNode)
{
    if (nullptr == pNode->m_pRight)
    {
        return pNode;
    }
    return CursionMaximumSub(pNode->m_pRight);
}

BSearchTreeNode* BinarySearchTree::Predecessor(BSearchTreeNode *pNode)
{
    if (nullptr != pNode->m_pLeft)
    {
        return Maximum(pNode->m_pLeft);
    }

    BSearchTreeNode *pParent = pNode->m_pParent;
    while (nullptr != pParent && pNode == pParent->m_pLeft)
    {
        pNode = pParent;
        pParent = pNode->m_pParent;
    }
    return pParent;
}

