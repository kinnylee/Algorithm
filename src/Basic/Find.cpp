#include "Find.h"

int Find::RecusionBinarySearch(int a[], int low, int high, int key)
{
    if (low >= high)
    {
        return -1;
    }
    
    int nMid = (low + high) / 2;
    if (a[nMid] == key)
    {
        return nMid;
    }
    if (a[nMid] > key)
    {
        return RecusionBinarySearch(a, low, nMid, key);
    }
    else
    {
        return RecusionBinarySearch(a, nMid + 1, high, key);
    }
}

int Find::BinarySearch(int a[], int low, int high, int key)
{
    while (low < high)
    {
        int nMid = (low + high) / 2;
        if (a[nMid] == key)
        {
            return nMid;
        }
        else if (a[nMid] > key)
        {
            high = nMid;
        }
        else
        {
            low = nMid + 1;
        }
    }
    return -1;
}

int Find::BinaryLocation(int a[], int low, int high, int key)
{
    while (low <= high)
    {
        int nMid = (low + high) / 2;

        if (a[nMid] >= key)
        {
            high = nMid -1;
        }
        else
        {
            low = nMid + 1;
        }
    }
    return low;
}

