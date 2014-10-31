//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//dynamic program
//dp[i][j] = min(dp[i - 1][j],dp[i][j - 1]) + grid[i][j]
class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) 
    {
        for(size_t i = 0;i != grid.size();i++)
            for(int j = 0;j != grid[i].size();j++)
                if(i || j)
                {
                    if(!i)
                        grid[i][j] += grid[i][j - 1];
                    else if(!j)
                        grid[i][j] += grid[i - 1][j];
                    else
                        grid[i][j] += min(grid[i - 1][j],grid[i][j - 1]);
                }
        return grid[grid.size() - 1][grid[grid.size() - 1].size() - 1];
    }
};