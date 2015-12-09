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

    void static QuickSort(int a[], int n);

    void static RandQuickSort(int a[], int n);

    /**
       brief: when the array approach order, insert sort is better
       when the quick sort array small return, use insert sort
    */
    void static QuickInsertSort(int a[], int n);

    /**
       brief: select three number, use the median quick sort
       TODO
    */
    void static QuickMedianSort(int a[], int n);

    void static TailRecursiveQuickSort(int a[], int n);

    /**
      brief: array b and array c used to help, find the number of large and samll,
      it is the right position.
      k is the max of the array, when k = O(n), count sort is a better function.
    */
    void static CountSort(int a[], int n, int k);

    /**
      brief: d is digit
    */
    void static RadixSort(int a[], int n, int d);

private:
    void static MergeSub(int a[], int nLow, int nHigh);
    void static Merge(int a[], int p, int q, int r);
    void static RecursionInsertSortSub(int a[], int nPos);
    void static MergeInsertSortSub(int a[], int nLow, int nHigh, int k);
    void static InsertSortSub(int a[], int nLow, int nHigh);
    void static MaxHeapify(int a[], int n, int nIndex);
    void static BuildMaxHeap(int a[], int n);
    void static QuickSortSub(int a[], int nLow, int nHigh);
    int static Partition(int a[], int nLow, int nHihg);
    int static PartitionSub(int a[], int nLow, int nHigh, int nBase);
    void static RandQuickSortSub(int a[], int nLow, int nHigh);
    int static RandParition(int a[], int nLow, int nHigh);
    void static QuickInsertSortSub(int a[], int nLow, int nHigh, int k);
    void static QuickMedianSortSub(int a[], int nLow, int nHigh);
    int static MedianParition(int a[], int nLow, int nHigh);
    void static TailRecursiveQuickSortSub(int a[], int nLow, int nHigh);
    void static CountSortSub(int a[], int n, int b[], int c[], int k);
    
};