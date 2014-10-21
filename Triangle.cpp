//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * dp[i][j] = triangle[i][j] + min(dp[i - 1][j - 1],dp[i - 1][j])
 */
class Solution
{
public:
    int minimumTotal(vector<vector<int> > &triangle)
    {
    	vector<int> dp;
    	dp.push_back(triangle[0][0]);
    	for(vector<int>::size_type i = 1;i != triangle.size();i++)
    	{
    		vector<int> tmp(dp);
    		dp[0] = tmp[0] + triangle[i][0];
    		for(vector<int>::size_type j = 1;j != triangle[i].size() - 1;j++)
    			dp[j] = min(tmp[j],tmp[j - 1]) + triangle[i][j];
    		dp.push_back(tmp[tmp.size() - 1] + triangle[i][tmp.size()]);
    	}
    	int lmin = dp[0];
		for(vector<int>::size_type i = 0;i != dp.size();i++)
			lmin = min(lmin,dp[i]);
    	return lmin;
    }
};
