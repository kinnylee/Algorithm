//find class

#include "Find_Global.h"

class FIND_EXPORT Find
{
public:
    int static RecusionBinarySearch(int a[], int low, int high, int key);
    int static BinarySearch(int a[], int low, int high, int key);
    //find the correct position int array. It means a[return] <= key <= a[return+1]
    int static BinaryLocation(int a[], int low, int high, int key);
};