//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//binary search
class Solution {
public:
    int searchInsert(int A[], int n, int target) 
    {
        int low,high,mid;
        low = 0,high = n - 1;
        while(low <= high)
        {
            mid = low + (high - low) / 2;
            if(A[mid] == target)
                return mid;
            if(A[mid] <= target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};