//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/*
 * f[k]: the largest product of contiguous subarray ending with A[k]
 * g[k]: the smallest product of contiguous subarray ending with A[k]
 * obviously,
 * f[k] = max(A[k],max(A[k] * f[k - 1],A[k] * g[k - 1]))
 * g[k] = min(A[k],min(A[k] * f[k - 1],A[k] * g[k - 1]))
 */
class Solution
{
public:
    int maxProduct(int A[], int n)
    {
    	int lmax = A[0];
    	int maxv,minv;
    	maxv = minv = A[0];
    	for(int i = 1;i < n;i++)
    	{
    		int tmp1 = A[i] * maxv;
    		int tmp2 = A[i] * minv;
    		maxv = max(tmp1,max(tmp2,A[i]));
    		minv = min(tmp1,min(tmp2,A[i]));
    		lmax = max(lmax,maxv);
    	}
    	return lmax;
    }
};

