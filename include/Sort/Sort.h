//sort algorithm

#include "Sort_Global.h"

class SORT_EXPORT Sort
{
public:
    /**
        brief: standard insert sort 
        parameter: a [in] 
    */
    void static InsertSort(int a[], int n);
    void static RecursionInsertSort(int a[], int n);
    void static BinaryInsertSort(int a[], int n);

    void static SelectSort(int a[], int n);

    void static MergeSort(int a[], int n);

    /**
        brief: merge sort and insert sort,when the sub array is small
               use insert sort
    */
    void static MergeInsertSort(int a[], int n);

    void static BubbleSort(int a[], int n);

    void static HeapSort(int a[], int n);

private:
    void static MergeSub(int a[], int nLow, int nHigh);
    void static Merge(int a[], int p, int q, int r);
    void static RecursionInsertSortSub(int a[], int nPos);
    void static MergeInsertSortSub(int a[], int nLow, int nHigh, int k);
    void static InsertSub(int a[], int nLow, int nHigh);
    void static MaxHeapify(int a[], int n, int nIndex);
    void static BuildMaxHeap(int a[], int n);
    
    void static Swap(int &a, int &b);
};