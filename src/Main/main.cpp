#include <process.h>

#include "SortTest.h"
#include "Common.h"

unsigned a[10] = { 1, 0, 0, 1, 0, 1, 0, 0, 1, 1 };
unsigned b[10] = { 1, 0, 0, 1, 1, 0, 0, 1, 1, 1 };

int const s_nArraySize = 10;
int s_array[s_nArraySize] = { 5, 0, 3, 9, 4, 8, 7, 1, 2, 6 };

int main()
{
    int *digit = new int[5];
    Common::Digit(12345, digit);
    system("pause");
    return 1;
}

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