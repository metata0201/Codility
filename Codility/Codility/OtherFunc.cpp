#include "OtherFunc.h"

int BinaryGap(int N)
{
    int maxBinaryGap = 0, cnt = 0;
    bool bStart = false;
    while (N)
    {
        if (N & 0x1)
        {
            if (bStart == false)
            {
                bStart = true;  // Indicate that meet the first '1'
            }
            else
            {
                maxBinaryGap = max(maxBinaryGap, cnt);
            }
            cnt = 0;    // The number of consecutive '0'
        }
        else
        {
            cnt++;
        }
        N = N >> 1;
    }
    return maxBinaryGap;
}