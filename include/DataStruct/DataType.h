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

#endif
