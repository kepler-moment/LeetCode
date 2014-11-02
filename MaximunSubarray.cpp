//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
* dp[i] = max(A[i], A[i] + dp[i - 1])
*/
class Solution {
public:
    int maxSubArray(int A[], int n) 
    {
        int lmax = A[0];
        for(int i = 1;i < n;i++)
        {
            A[i] = max(A[i],A[i] + A[i - 1]);
            lmax = max(lmax,A[i]);
        }
        return lmax;
    }
};
