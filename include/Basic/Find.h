//find class
#ifndef _FIND_H_
#define _FIND_H_

#include "Basic_Global.h"

class BASIC_EXPORT Find
{
public:
    int static RecusionBinarySearch(int a[], int low, int high, int key);
    int static BinarySearch(int a[], int low, int high, int key);
    //find the correct position int array. It means a[return] <= key <= a[return+1]
    int static BinaryLocation(int a[], int low, int high, int key);

    //find if exists two numbers, and the sum of the two numbers is the given number
    // need the time complexity is n*lgn
    bool static FindTwoNumber(int a[], int n, int sum);

    //find the the number of pos
    int static RandomizedSelect(int a[], int p, int r, int pos);
};

#endif