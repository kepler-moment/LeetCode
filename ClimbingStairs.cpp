//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * dp[i] = dp[i - 1] + dp[i - 2]
 */
class Solution {
public:
    int climbStairs(int n)
    {
    	if(n <= 2)
    		return n;
    	int i1,i2;
    	i1 = 1,i2 = 2;
    	for(int i = 3;i <= n;i++)
    	{
    		int tmp = i1 + i2;
    		i1 = i2,i2 = tmp;
    	}
    	return i2;
    }
};