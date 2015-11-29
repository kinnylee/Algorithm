#include "MaxSubArray.h"

int MaxSubArray::MergeFindMax(int a[], int n, int &nLowPos, int &nHighPos)
{
    return FindMaxValueSub(a, 0, n - 1, nLowPos, nHighPos);
}

int MaxSubArray::FindMaxValueSub(
    int     a[],
    int     nLow, 
    int     nHigh, 
    int    &nLowPos, 
    int    &nHighPos
    )
{
    if (nLow > nHigh)
    {
        return 0;
    }
    if (nLow == nHigh)
    {
        nLowPos = nHighPos = nLow;
        return a[nLow];
    }
    else
    {
        int nMid = (nHigh + nLow) / 2;
        int nLeftSum = FindMaxValueSub(a, nLow, nMid, nLowPos, nHighPos);
        int nRightSum = FindMaxValueSub(a, nMid + 1, nHigh, nLowPos, nHighPos);
        int nCrossSum = FindMaxCrossSub(a, nLow, nMid, nHigh, nLowPos, nHighPos);

        //find the max result
        if (nLeftSum >= nRightSum && nLeftSum >= nCrossSum)
        {
            return nLeftSum;
        }
        else if (nRightSum >= nLeftSum && nRightSum >= nCrossSum)
        {
            return nRightSum;
        }
        else
        {
            return nCrossSum;
        }
    }
}

int MaxSubArray::FindMaxCrossSub(int a[], int nLow, int nMid, int nHigh, int &nLowPos, int &nHighPos)
{
    int nSum = 0, nLeftSum = 0;
    for (int i = nMid; i > nLow; --i)
    {
        nSum += a[i];
        if (nSum > nLeftSum)
        {
            nLeftSum = nSum;
            nLowPos = i;
        }
    }

    nSum = 0;
    int nRightSum = 0;
    for (int i = nMid + 1; i < nHigh; ++i)
    {
        nSum += a[i];
        if (nSum > nRightSum)
        {
            nRightSum = nSum;
            nHighPos = i;
        }
    }

    return nLeftSum + nRightSum;
}

int MaxSubArray::ViolenceFindMax(int a[], int n, int &nLowPos, int &nHighPos)
{
    int nResult = 0;
    for (int i = 0; i < n; ++i)
    {
        nLowPos = i;
        int nSum = 0;
        for (int j = i; j < n; ++j)
        {
            nSum += a[j];
            if (nSum > nResult)
            {
                nResult = nSum;
                nHighPos = j;
            }
            else
            {
                break;
            }
        }
    }
    return nResult;
}

int MaxSubArray::SequenceFindMax(int a[], int n, int &nLowPos, int &nHighPos)
{
    int nMax = -1000;
    int nSum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (nSum < 0)
        {
            nSum = a[i];
            nLowPos = i;
        }
        else
        {
            nSum += a[i];
        }

        if (nSum > nMax)
        {
            nMax = nSum;
            nHighPos = i;
        }
    }
    return nMax;
}

