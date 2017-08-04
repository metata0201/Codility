#include "ArrayFunc.h"

vector<int> CyclicRotation(vector<int> &A, int K)
{
    if (A.empty()) { return A; }

    int i, j;
    for (i = 0; i < K; i++)
    {
        int temp = A.back();
        for (j = A.size() - 1; j > 0; j--)
        {
            A[j] = A[j - 1];
        }
        A[j] = temp;
    }
    return A;
}

int OddOccurrencesInArray(vector<int> &A)
{
    int ret = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        ret = ret ^ A[i];
    }
    return ret;
}

int PermMissingElem(vector<int> &A)
{
    if (A.empty()) { return 1; }

    int sum = 0, arraySum = 0;
    sum = ((A.size() + 1)*(A.size() + 2)) >> 1; // The sum of arithmetic sequence "1,2,3,...,N+1"
    for (int i = 0; i < A.size(); i++)
    {
        arraySum += A[i];   // The sum of the array.
    }
    return sum - arraySum;
}

int TapeEquilibrium(vector<int> &A)
{
    int i, arraySum = 0, sum1, sum2;
    unsigned int minDiff = -1;
    for (i = 0; i < A.size(); i++)
    {
        arraySum += A[i];
    }

    sum1 = 0;
    sum2 = arraySum;
    for (i = 0; i < A.size()-1; i++)
    {
        sum1 = sum1 + A[i]; // The sum of the first part
        sum2 = sum2 - A[i]; // The sum of the second part
        if (minDiff > abs(sum1 - sum2))
        {
            minDiff = abs(sum1 - sum2);
        }
    }
    return minDiff;
}

// Solve it with Pigeonhole principle.There are N integers in the input.So for the first N + 1 positive
// integers, at least one of them must be missing.
int MissingInteger(vector<int> &A)
{
    const int len = A.size() + 1;
    vector<bool> buckets(len, false);
    // We only care about the first N + 1 positive integers.The status of integer i + 1 is in buckets[i].
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i]>0 && A[i] <= len)
            buckets[A[i] - 1] = true;
    }

    // Find out the missing minimal positive integer.
    for (int i = 0; i < len; i++)
    {
        if (buckets[i] == false)
            return i + 1;
    }
    cout << "Should never be here." << endl;
    return -1;
}

// Permutation means A[i] must be in the scope of (1,...,N).
int PermCheck(vector<int> &A)
{
    const int len = A.size();
    vector<bool> buckets(len, false);
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] >= 1 && A[i] <= len)   // A[i] is within the range[1..1, 000, 000, 000], it used to handle integers that is larger than length.
            buckets[A[i] - 1] = true;
    }

    for (int i = 0; i < len; i++)
    {
        if (buckets[i] == false)
            return 0;
    }
    return 1;
}

int FrogRiverOne(int X, vector<int> &A)
{
    vector<int> pos(X, 1);
    int sum = X;        // The sum of 'pos' array
    for (int i = 0; i < A.size(); i++)
    {
        if (pos[A[i] - 1] == 1)
        {
            sum -= pos[A[i] - 1];
            pos[A[i] - 1] = 0;
        }
        if (sum == 0)   // The earliest time all position values within [1,...,X] appears
        {
            return i;
        }
    }

    cout << "The frog is never able to jump to the other side of the river!" << endl;
    return -1;
}

// Use lazy-write to improve the performance.When receiving the max_counter command, we record the current-max value,
// but do not change the list content.Only when we are going to return the list or increace a specific element, we will
// apply the stored value to the corresponding element(s).
vector<int> MaxCounters(int N, vector<int> &A)
{
    vector<int> counters(N, 0);
    int maxCounter  = 0;    // The current maximum value of any counter
    int lastCounter = 0;    // The used value in previous 'max counter command'
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > N)   // A[i]=N+1,max counter command
        {   // Just record the current maximum value for later write
            lastCounter = maxCounter;
        }
        else
        {   // 1<=A[i]<=N, increase command
            counters[A[i] - 1] = max(counters[A[i] - 1], lastCounter);
            counters[A[i] - 1]++;
            maxCounter = max(counters[A[i] - 1], maxCounter);
        }
    }

    // Update element has never been used after previous 'max counter command'
    for (int i = 0; i < N; i++)
    {
        counters[i] = max(counters[i], lastCounter);
    }
    return counters;
}

int PassingCars(vector<int> &A)
{
    int sum = 0, pairsSum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];    // A[i] is either 0 or 1
    }

    for (int i = 0; i < A.size(); i++)
    {
        sum -= A[i];    // Calculate the sum of remaining elements by excluding current element
        if (A[i] == 0)  // Start from 0 to make pair with following 1 elements
        {
            pairsSum += sum;
        }
        if (pairsSum > 1000000000)
            return -1;
    }
    return pairsSum;
}

int CountDiv(int A, int B, int K)
{
    int lower = A, upper = B;
    if (A%K != 0)   // Find the first value after A that is divisible by K
    {
        lower = A - A%K + K;
    }
    if (B%K != 0)   // Find the last value before B that is divisible by K
    {
        upper = B - B%K;
    }

    if (lower > upper)
        return 0;
    else
        return (upper - lower) / K + 1;
}

// The key to solve this task is these two patterns :
// (1) There must be some slices, with length of two or three, having the minimal average value among all the slices.
// (2) And all the longer slices with minimal average are built up with these 2 - element and / or 3 - element small slices.
int MinAvgTwoSlice(vector<int> &A)
{
    float minAvgVal, avgSlice2, avgSlice3;
    int minAvgPos = 0;                  // The begin position of the first slice with mininal average
    minAvgVal = (A[0] + A[1]) / 2;      // The mininal average

    for (int i = 0; i < A.size()-2; i++)
    {
        // Try the next 2-element slice
        avgSlice2 = (float)(A[i] + A[i + 1]) / 2;
        if (avgSlice2 < minAvgVal)
        {
            minAvgVal = avgSlice2;
            minAvgPos = i;
        }

        // Try the next 3-element slice
        avgSlice3 = (float)(A[i] + A[i + 1] + A[i + 2]) / 3;
        if (avgSlice3 < minAvgVal)
        {
            minAvgVal = avgSlice3;
            minAvgPos = i;
        }
    }

    // Try the last 2-element slice
    avgSlice2 = (A[A.size() - 2] + A[A.size() - 1]) / 2;
    if (avgSlice2 < minAvgVal)
    {
        minAvgVal = avgSlice2;
        minAvgPos = A.size() - 2;
    }
    return minAvgPos;
}