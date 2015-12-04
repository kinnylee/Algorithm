//≈≈–Úµ•‘™≤‚ ‘
#ifndef _SORTTEST_H_
#define _SORTTEST_H_
#include "Sort_Global.h"

class SORT_EXPORT SortTest
{              
public:
    SortTest();

    void static InsertSortTest();
    void static SelectSortTest();
    void static MergeSortTest();
    void static RecursionInsertSortTest();
    void static BinaryInsertSortTest();
    void static MergeInsertSortTest();
    void static BubbleSortTest();
    void static HeapSortTest();
    void static QuickSortTest();
    void static RandQuickSortTest();
    void static QuickInsertSortTest();

private:
    void static PrintOut();
};

#endif
