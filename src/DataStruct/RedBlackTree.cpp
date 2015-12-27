#include "RedBlackTree.h"

RedBlackTree::RedBlackTree(int nRootKey /*= -1*/)
{
    m_pNull = NewNode(-2, black);

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

void RedBlackTree::LeftRotate(RedBlackNode *pNode)
{
    //save the current node's right child
    RedBlackNode *pRight = pNode->m_pRight;

    //current right node point to the right child left child
    pNode->m_pRight = pRight->m_pLeft;

    //right child left child parent point to the current node
    if (pRight->m_pLeft != m_pNull)
    {
        pRight->m_pLeft->m_pParent = pNode;
    }

    pRight->m_pParent = pNode->m_pParent;
    if (pNode->m_pParent == m_pNull)
    {
        m_pRoot = pRight;
    }
    else if (pNode == pNode->m_pParent->m_pLeft)
    {
        pNode->m_pParent->m_pLeft = pRight;
    }
    else
    {
        pNode->m_pParent->m_pRight = pRight;
    }

    pRight->m_pLeft = pNode;
    pNode->m_pParent = pRight;
}

void RedBlackTree::RightRotate(RedBlackNode *pNode)
{
    RedBlackNode *pLeft = pNode->m_pLeft;
    pNode->m_pLeft = pLeft->m_pRight;

    if (pLeft->m_pParent != m_pNull)
    {
        pLeft->m_pRight->m_pParent = pNode;
    }

    pLeft->m_pParent = pNode->m_pParent;
    if (pNode->m_pParent == m_pNull)
    {
        m_pRoot = pLeft;
    }
    else if (pNode == pNode->m_pParent->m_pLeft)
    {
        pNode->m_pParent->m_pLeft = pLeft;
    }
    else
    {
        pNode->m_pParent->m_pRight = pLeft;
    }

    pLeft->m_pRight = pNode;
    pNode->m_pParent = pLeft;
}

void RedBlackTree::RBInsert(RedBlackNode *pNode)
{
    RedBlackNode *pPre = m_pNull;
    RedBlackNode *pCur = m_pRoot;
    while (nullptr != pCur)
    {
        pPre = pCur;
        if (pCur->m_nData < pNode->m_nData)
        {
            pCur = pCur->m_pLeft;
        }
        else
        {
            pCur = pCur->m_pRight;
        }
    }

    pNode->m_pParent = pPre;
    if (pPre == m_pNull)
    {
        m_pRoot = pNode;
    }
    else if (pPre->m_nData > pNode->m_nData)
    {
        pPre->m_pLeft = pNode;
    }
    else
    {
        pPre->m_pRight = pNode;
    }

    pNode->m_pLeft = m_pNull;
    pNode->m_pRight = m_pNull;
    pNode->m_nColor = red;
    RBInsertFix(pNode);
}

void RedBlackTree::RBInsertFix(RedBlackNode *pNode)
{
    RedBlackNode *pUncle = nullptr;
    while (pNode->m_pParent->m_nColor == red)
    {
        if (pNode->m_pParent == pNode->m_pParent->m_pLeft)
        {
            pUncle = pNode->m_pParent->m_pRight;
            if (pUncle->m_nColor == red)
            {
                pNode->m_pParent->m_nColor = black;
                pUncle->m_nColor = black;
                pNode->m_pParent->m_pParent->m_nColor = red;
                pNode = pNode->m_pParent->m_pParent;
            }
            else if (pNode == pNode->m_pParent->m_pRight)
            {
                pNode = pNode->m_pParent;
                LeftRotate(pNode);
                pNode->m_pParent->m_nColor = black;
                pNode->m_pParent->m_pParent->m_nColor = red;
                RightRotate(pNode->m_pParent->m_pParent);
            }
            else
            {
                pNode = pNode->m_pParent;
                RightRotate(pNode);
                pNode->m_pParent->m_nColor = black;
                pNode->m_pParent->m_pParent->m_nColor = red;
                LeftRotate(pNode->m_pParent->m_pParent);
            }
        }
    }
    m_pRoot->m_nColor = black;
}

