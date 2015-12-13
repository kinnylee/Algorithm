#ifndef _QUEUEDOUBLESTACK_H_
#define _QUEUEDOUBLESTACK_H_

#include "DataStruct_Global.h"
#include "Stack.h"

class DATASTRUCT_EXPORT QueueDoubleStack
{
public:
    QueueDoubleStack(int nSize);
    ~QueueDoubleStack();

    bool Empty();
    bool OverFlow();
    void EnQueue(int x);
    int DeQueue();
    int Size();

private:
    Stack *m_lStack;
    Stack *m_RStack;
    int m_nSize;
};

#endif
