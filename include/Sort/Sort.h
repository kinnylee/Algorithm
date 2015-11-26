//sort algorithm

#include "Sort_Global.h"

class SORT_EXPORT Sort
{
public:
    void static InsertSort(int a[], int n);
    void static SelectSort(int a[], int n);
    void static MergeSort(int a[], int n);
    void static RecursionInsertSort(int a[], int n);
    void static BinaryInsertSort(int a[], int n);

private:
    void static MergeSub(int a[], int nLow, int nHigh);
    void static Merge(int a[], int p, int q, int r);
    void static RecursionInsertSortSub(int a[], int nPos);
};