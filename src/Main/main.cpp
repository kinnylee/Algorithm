#include <process.h>
#include <iostream>
#include <objbase.h>
#include <tchar.h>
#include "comutil.h"

#include "SortTest.h"
#include "Common.h"
#include "Stack.h"
#include "Queue.h"
#include "StackDoubleQueue.h"
#include "QueueDoubleStack.h"
#include "LinkList.h"
#include "DoubleLinkList.h"
#include "StackList.h"
#include "CyclicLinkList.h"
#include "QueueList.h"

#include "ProcessOuterCOMServer_i.h"
#include "ProcessOuterCOMServer_i.c"
#include <vector>

unsigned a[10] = { 1, 0, 0, 1, 0, 1, 0, 0, 1, 1 };
unsigned b[10] = { 1, 0, 0, 1, 1, 0, 0, 1, 1, 1 };

int const s_nArraySize = 10;
int s_array[s_nArraySize] = { 5, 0, 3, 9, 4, 8, 7, 1, 2, 6 };

int main()
{
    CyclicLinkList *pList = new CyclicLinkList;
    CyclicLinkList *pList2 = new CyclicLinkList;
    pList->FrontInsert(1);
    pList->TailInsert(4);
    pList->InceraseInsert(2);
    pList->TailInsert(9);
    pList->FrontInsert(8);
    pList->Delete(2);
    pList2->FrontInsert(10);
    pList2->TailInsert(11);
    pList->Union(pList2);
    pList->PrintOut();
    delete pList; pList = nullptr;
    
    system("pause");
    return 1;
}

    //QueueList *pList = new QueueList;
    //pList->EnQueue(2);
    //pList->EnQueue(1);
    //pList->EnQueue(3);
    //std::cout << pList->DeQueue() << std::endl;
    //std::cout << pList->DeQueue() << std::endl;
    //std::cout << pList->DeQueue() << std::endl;
    //delete pList;
    //pList = nullptr;

    
    //CoInitialize(NULL);
    //HRESULT hr;
    //IOuterCOMExport *pOuterExport = nullptr;
    //hr = CoCreateInstance(CLSID_OuterCOMExport, NULL, CLSCTX_LOCAL_SERVER, IID_IOuterCOMExport,
    //    (void**)&pOuterExport);
    //pOuterExport->SetName(SysAllocString(_T("Lee")));
    //BSTR name;
    //pOuterExport->GetName(&name);
    //std::cout << _bstr_t(name) << std::endl;
    //CoUninitialize();

    //StackList *pList = new StackList;
    //pList->Push(1);
    //pList->Push(3);
    //pList->Push(2);
    //std::cout << pList->Pop() << std::endl;
    //std::cout << pList->Pop() << std::endl;
    //std::cout << pList->Pop() << std::endl;
    //pList->Push(4);
    //std::cout << pList->Pop() << std::endl;
    //delete pList;
    //pList = nullptr;

    //DoubleLinkList *pDLink = new DoubleLinkList;
    //pDLink->IncraseInsert(1);
    //pDLink->IncraseInsert(3);
    //pDLink->IncraseInsert(2);
    //pDLink->PrintOut();
    //delete pDLink;
    //pDLink = nullptr;

    //LinkList *pHead = new LinkList;
    //pHead->FrontInsert(1);
    //pHead->FrontInsert(2);
    //pHead->FrontInsert(3);
    //LinkNode *pNode = pHead->Search(2);
    //pHead->DeleteNodeTraval(pNode);
    //pHead->Clear();
    ////  pHead->DeleteTail();//
    //pHead->PrintOut();
    //delete pHead;
    //pHead = nullptr;

    /*StackDoubleQueue stack(5);
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    std::cout << stack.Pop() << std::endl;
    std::cout << stack.Pop() << std::endl;
    std::cout << stack.Pop() << std::endl;*/

    /*QueueDoubleStack queue(5);
    queue.EnQueue(1);
    queue.EnQueue(2);
    queue.EnQueue(3);
    std::cout << queue.DeQueue() << std::endl;
    std::cout << queue.DeQueue() << std::endl;
    std::cout << queue.DeQueue() << std::endl;*/

    /*DoubleQueue dQueue(5);
    dQueue.EnQueueHead(1);
    dQueue.EnQueueHead(2);
    std::cout << dQueue.DeQueueHead() << std::endl;
    std::cout << dQueue.DeQueueTail() << std::endl;
    dQueue.EnQueueTail(3);*/

    /*Stack stack(3);
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);
    std::cout << stack.Pop() << std::endl;
    std::cout << stack.Pop() << std::endl;*/

    /*DoubleStack dStack(5);
    dStack.PushLeft(1);
    dStack.PushLeft(2);
    dStack.PushLeft(3);
    dStack.PushLeft(6);
    dStack.PushRight(4);
    dStack.PushRight(5);
    std::cout << dStack.PopLeft() << std::endl;
    std::cout << dStack.PopLeft() << std::endl;
    std::cout << dStack.PopLeft() << std::endl;
    std::cout << dStack.PopRight() << std::endl;
    std::cout << dStack.PopRight() << std::endl;*/

   

   

    //int *digit = new int[5];
    //Common::Digit(12345, digit);

    //SortTest::CountSortTest();
    //SortTest::TailRecursiveQuickSortTest();
   //TODO //SortTest::QuicMedianSortTest();
//    SortTest::QuickInsertSortTest();
//    SortTest::RandQuickSortTest();
//    SortTest::QuickSortTest();
    // SortTest::InsertSortTest();

    //unsigned *c = new unsigned[11];
    //BinaryArray::Add(a, b, 10, c);

    // SortTest::RecursionInsertSortTest();
    //  SortTest::BinaryInsertSortTest();
    //  SortTest::MergeSortTest();
    //  SortTest::MergeInsertSortTest();
    //  SortTest::BubbleSortTest();
    //  SortTest::MergeSortTest();
    //  SortTest::QuickSortTest();

// Sort::InsertSort(s_array, s_nArraySize);
// Sort::BinaryInsertSort(s_array, s_nArraySize);

// unsigned *c = new unsigned[11];
//BinaryArray::Add(a, b, 10, c);

//std::cout << Find::RecusionBinarySearch(s_array, 0, s_nArraySize, 8);
//std::cout << Find::BinarySearch(s_array, 0, s_nArraySize, 3);

//std::cout << Find::FindTwoNumber(s_array, s_nArraySize, 8);

//Polynome poly = PolynomeTest::Add();
//std::cout << poly.ToString();
//std::cout << poly.GetValue(1);

//std::cout << Inversion::FindInversion(s_array, s_nArraySize);

/*
int nLowPos = 0, nHighPos = 0, nMaxValue = 0;
nMaxValue = MaxSubArray::SequenceFindMax(s_array, s_nArraySize, nLowPos, nHighPos);
std::cout << nMaxValue << std::endl;
std::cout << nLowPos << std::endl;
std::cout << nHighPos << std::endl;
*/
/*
MatrixTest::CreateMatrix()->PrintOut();
MatrixTest::Add()->PrintOut();
MatrixTest::Multiple()->PrintOut();
system("pause");
*/