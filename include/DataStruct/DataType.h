#ifndef _DATATYPE_H_
#define _DATATYPE_H_

typedef struct LinkNode
{
    int m_nData;
    LinkNode *m_pNext;
}LinkNode;


typedef struct DLinkNode
{
    int m_nData;
    DLinkNode *m_pPrev;
    DLinkNode *m_pNext;
}DLinkNode;

typedef struct DLinkNodeOnePtr
{
    int m_nData;
    DLinkNodeOnePtr *m_pNP;
}DLinkNodeOnePtr;

typedef struct BTreeNode
{
    int m_nData;
    BTreeNode *m_pLeft;
    BTreeNode *m_pRight;
}BTreeNode;

typedef struct BSearchTreeNode
{
    int m_nData;
    BSearchTreeNode *m_pParent;
    BSearchTreeNode *m_pLeft;
    BSearchTreeNode *m_pRight;
}BSearchTreeNode;

typedef struct BParSuccTreeNode
{
    int m_nData;
    BParSuccTreeNode *m_pParent;
    BParSuccTreeNode *m_pSuccessor;
}BParSuccTreeNode;

#endif
