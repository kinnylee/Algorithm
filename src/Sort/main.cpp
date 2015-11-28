#include <process.h>

#include "SortTest.h"
#include "BinaryArray.h"

unsigned a[10] = { 1, 0, 0, 1, 0, 1, 0, 0, 1, 1 };
unsigned b[10] = { 1, 0, 0, 1, 1, 0, 0, 1, 1, 1 };

int main()
{
   // SortTest::InsertSortTest();

    //unsigned *c = new unsigned[11];
    //BinaryArray::Add(a, b, 10, c);

   // SortTest::RecursionInsertSortTest();
  //  SortTest::BinaryInsertSortTest();
  //  SortTest::MergeSortTest();
    SortTest::MergeInsertSortTest();
    system("pause");
}