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