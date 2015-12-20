#include <iostream>
#include <stack>

#include "BinaryTree.h"

BinaryTree::BinaryTree(int nRoot)
{
    if (nRoot == -1)
    {
        m_pRoot = nullptr;
    }
    else
    {
        m_pRoot = new BTreeNode;
        m_pRoot->m_nData = nRoot;
        m_pRoot->m_pLeft = nullptr;
        m_pRoot->m_pRight = nullptr;
    }
}

BinaryTree::~BinaryTree()
{

}

BTreeNode*  BinaryTree::InsertLeftNode(BTreeNode *pNode, int nKey)
{
    BTreeNode *pNewNode = new BTreeNode;
    pNewNode->m_nData = nKey;
    pNewNode->m_pLeft = pNode->m_pLeft;
    pNewNode->m_pRight = nullptr;

    pNode->m_pLeft = pNewNode;
    return pNewNode;
}

BTreeNode*  BinaryTree::InsertRightNode(BTreeNode *pNode, int nKey)
{
    BTreeNode *pNewNode = new BTreeNode;
    pNewNode->m_nData = nKey;
    pNewNode->m_pLeft = nullptr;
    pNewNode->m_pRight = pNode->m_pRight;

    pNode->m_pRight = pNewNode;
    return pNewNode;
}

void BinaryTree::PreOrder()
{
    std::cout << "PreOrder: ";
    PrePrint(m_pRoot);
    std::cout << std::endl;
}

void BinaryTree::PrePrint(BTreeNode *pNode)
{
    if (nullptr != pNode)
    {
        std::cout << pNode->m_nData << "\t";
        PrePrint(pNode->m_pLeft);
        PrePrint(pNode->m_pRight);
    }
}

void BinaryTree::Clear()
{

}

BTreeNode* BinaryTree::Root()
{
    return m_pRoot;
}

void BinaryTree::InOrder()
{
    std::cout << "InOrder: ";
    InPrint(m_pRoot);
    std::cout << std::endl;
}

void BinaryTree::PostOrder()
{
    std::cout << "PostOrder: ";
    PostPrint(m_pRoot);
    std::cout << std::endl;
}

void BinaryTree::InPrint(BTreeNode *pNode)
{
    if (nullptr != pNode)
    {
        InPrint(pNode->m_pLeft);
        std::cout << pNode->m_nData << "\t";
        InPrint(pNode->m_pRight);
    }
}

void BinaryTree::PostPrint(BTreeNode *pNode)
{
    if (nullptr != pNode)
    {
        PostPrint(pNode->m_pLeft);
        PostPrint(pNode->m_pRight);
        std::cout << pNode->m_nData << "\t";
    }
}

void BinaryTree::NonRecPreOrder()
{
    if (nullptr == m_pRoot)
    {
        return;
    }
    std::stack<BTreeNode*> nodeStack;
    nodeStack.push(m_pRoot);
    std::cout << "NonRecursionPreOrder: ";
    while (!nodeStack.empty())
    {
        BTreeNode *pNode = nodeStack.top();
        std::cout << pNode->m_nData << "\t";
        nodeStack.pop();
        if (nullptr != pNode->m_pRight)
        {
            nodeStack.push(pNode->m_pRight);
        }
        if (nullptr != pNode->m_pLeft)
        {
            nodeStack.push(pNode->m_pLeft);
        }
    }
    std::cout << std::endl;
}

void BinaryTree::NonRecInOrder()
{
    if (nullptr == m_pRoot)
    {
        return;
    }
    std::stack<BTreeNode*> nodeStack;
    nodeStack.push(m_pRoot);
    while (!nodeStack.empty())
    {
        BTreeNode *pNode = nodeStack.top();
        while (nullptr != pNode->m_pRight)
        {
            nodeStack.push(pNode->m_pRight);
            pNode = pNode->m_pRight;
        }
        while (nullptr != pNode->m_pLeft)
        {
            nodeStack.push(pNode->m_pLeft);
            pNode = pNode->m_pLeft;
        }
        BTreeNode *pCur = nodeStack.top();
        std::cout << pCur->m_nData << "\t";
        nodeStack.pop();
    }
}

void BinaryTree::NonRecPostOrder()
{

}

