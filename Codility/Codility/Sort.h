#pragma once
#include <vector>
#include <algorithm>

using namespace std;

/*The divide-and-conquer strategy is used in quicksort.Below the recursion step is described :
1. Choose a pivot value.We take the value of the middle element as pivot value, but it can be any value, 
   which is in range of sorted values, even if it doesn't present in the array.
2. Partition:Rearrange elements in such a way, that all elements which are lesser than the pivot go to 
   the left part of the array and all elements greater than the pivot, go to the right part of the array.
   Values equal to the pivot can stay in any part of the array.Notice, that array may be divided in non - equal parts.
3. Sort both parts:Apply quicksort algorithm recursively to the left and the right parts.*/
void QuickSort(vector<int> &data, int low, int high);