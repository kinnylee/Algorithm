#ifndef _MAXSUBARRAY_H_
#define  _MAXSUBARRAY_H_

class MaxSubArray
{
public:
    int static MergeFindMax(int a[], int n, int &nLowPos, int &nHighPos);
    int static ViolenceFindMax(int a[], int n, int &nLowPos, int &nHighPos);
    int static SequenceFindMax(int a[], int n, int &nLowPos, int &nHighPos);

private:
    int static FindMaxValueSub(
        int     a[], 
        int     nLow, 
        int     nHigh, 
        int    &nLowPos, 
        int    &nHighPos
        );

    int static FindMaxCrossSub(
        int     a[],
        int     nLow,
        int     nMid,
        int     nHigh,
        int    &nLowPos,
        int    &nHighPos
        );
};

#endif