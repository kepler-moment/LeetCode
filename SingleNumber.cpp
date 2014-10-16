//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * property: a ^ a = 0,a ^ 0 = a, a ^ b = b ^ a
 */
class Solution {
public:
    int singleNumber(int A[], int n)
    {
        int result = 0;
        for(int i = 0;i < n;i++)
        	result ^= A[i];
        return result;
    }
};
