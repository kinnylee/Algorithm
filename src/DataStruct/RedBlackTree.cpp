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

/***
    Six situations:
    but we only research three situations, other three situations is symmetrical
    1£ºparent is red, and uncle also red 
            do: change parent and uncle color to black, and change grandfather to red,
                the current point to grandfather
    2£ºparent is red, but uncle is black, current node is parent right child 
            do: the current point to parent and left rotate the current node
            Because: situation 2 left rotate will become to situation 3
    3£ºparent is red, but uncle is black, current node is parent left child 
            do: the parent color change to black and the grandfather color change
                to red, then right rotate the grandfather
*/
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
        else
        {
            pUncle = pNode->m_pParent->m_pLeft;
            if (pUncle->m_nColor == red)
            {
                pNode->m_pParent->m_nColor = black;
                pUncle->m_nColor = black;
                pNode->m_pParent->m_pParent->m_nColor = red;
                pNode = pNode->m_pParent->m_pParent;
            }
            else if (pNode == pNode->m_pParent->m_pLeft)
            {
                pNode = pNode->m_pParent;
                RightRotate(pNode);
                pNode->m_pParent->m_nColor = black;
                pNode->m_pParent->m_pParent->m_nColor = red;
                LeftRotate(pNode->m_pParent->m_pParent);
            }
            else
            {
                pNode = pNode->m_pParent;
                LeftRotate(pNode);
                pNode->m_pParent->m_nColor = black;
                pNode->m_pParent->m_pParent->m_nColor = red;
                RightRotate(pNode->m_pParent->m_pParent);
            }
        }
    }
    m_pRoot->m_nColor = black;
}

void RedBlackTree::RBTransplant(RedBlackNode *pObject, RedBlackNode *pSubject)
{
    if (m_pNull == pObject->m_pParent)
    {
        m_pRoot = pSubject;
    }
    else if (pObject == pObject->m_pParent->m_pLeft)
    {
        pObject->m_pParent->m_pLeft = pSubject;
    }
    else
    {
        pObject->m_pParent->m_pRight = pSubject;
    }
    pSubject->m_pParent = pObject->m_pParent;
}

void RedBlackTree::RBDelete(RedBlackNode *pNode)
{
    RedBlackNode *pPost = pNode;
    RedBlackNode *pPostOrigin = nullptr;
    NodeColor postOrigColor = pPost->m_nColor;
    if (pNode->m_pLeft == m_pNull)
    {
        pPostOrigin = pNode->m_pRight;
        RBTransplant(pNode, pNode->m_pRight);
    }
    else if (pNode->m_pRight == m_pNull)
    {
        pPostOrigin = pNode->m_pLeft;
        RBTransplant(pNode, pNode->m_pLeft);
    }
    else
    {
        pPost = Mininum(pNode->m_pRight);
        postOrigColor = pPost->m_nColor;
        pPostOrigin = pPost->m_pRight;
        if (pPost->m_pParent == pNode)
        {
            pPostOrigin->m_pParent = pPost;
        }
        else
        {
            RBTransplant(pPost, pPost->m_pRight);
            pPost->m_pRight = pNode->m_pRight;
            pPost->m_pRight->m_pParent = pPost;
        }
        RBTransplant(pNode, pPost);
        pPost->m_pLeft = pNode->m_pLeft;
        pPost->m_pLeft->m_pParent = pPost;
        pPost->m_nColor = pNode->m_nColor;
    }

    if (postOrigColor == black)
    {
        RBDeleteFix(pPostOrigin);
    }
}

void RedBlackTree::RBDeleteFix(RedBlackNode *pNode)
{
    while (pNode != m_pRoot && pNode->m_nColor == black)
    {
        if (pNode = pNode->m_pParent->m_pLeft)
        {
            RedBlackNode *pBrother = pNode->m_pParent->m_pRight;
            if (pBrother->m_nColor == red)
            {
                pBrother->m_nColor = black;
                pBrother->m_pParent->m_nColor = red;
                LeftRotate(pNode->m_pParent);
                pBrother = pNode->m_pParent->m_pRight;
            }
            if (pBrother->m_pLeft->m_nColor == black && pBrother->m_pRight->m_nColor == black)
            {
                pBrother->m_nColor = red;
                pNode = pNode->m_pParent;
            }
            else if (pBrother->m_pRight->m_nColor = black)
            {
                pBrother->m_pLeft->m_nColor = black;
                pBrother->m_nColor = red;
                RightRotate(pBrother);
                pBrother = pNode->m_pParent->m_pRight;
            }

            pBrother->m_nColor = pNode->m_pParent->m_nColor;
            pNode->m_pParent->m_nColor = black;
            pBrother->m_pRight->m_nColor = black;
            LeftRotate(pNode->m_pParent);
            pNode = m_pRoot;
        }
        else
        {

        }
    }
    pNode->m_nColor = black;
}

RedBlackNode* RedBlackTree::Mininum(RedBlackNode *pNode /*= nullptr*/)
{
    if (pNode == nullptr)
    {
        return m_pRoot;
    }
    while (nullptr != pNode->m_pLeft)
    {
        pNode = pNode->m_pLeft;
    }
    return pNode;
}

