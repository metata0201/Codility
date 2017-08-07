#include "Sort.h"

void QuickSort(vector<int> &data, int low, int high)
{
    int i = low, j = high;
    int pivot = data[(low + high) / 2];

    // Partition
    while (i <= j)
    {
        while (data[i] < pivot) { i++; }
        while (data[j] > pivot) { j--; }
        if (i <= j)
        {
            swap(data[i++], data[j--]);
        }
    }

    if (low < j)  QuickSort(data, low, j);   // Quick sort the first part
    if (i < high) QuickSort(data, i, high);  // Quick sort the second part
}