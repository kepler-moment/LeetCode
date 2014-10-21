//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * according to the problem,sum of i-th bit of all numbers mod 3 = 0 or 1
 * 1 represents single number's i-th bit is 1
 */
class Solution {
public:
    int singleNumber(int A[], int n)
    {
        int result = 0;
        for(int i = 0;i < 32;i++)
        {
        	int s = 0,tmp = (1 << i);
        	for(int j = 0;j < n;j++)
        	{
        		int v = A[j] & tmp;
        		if(v)
        			s++;
        	}
        	if(s % 3)
        		result |= tmp;
        }
        return result;
    }
};
