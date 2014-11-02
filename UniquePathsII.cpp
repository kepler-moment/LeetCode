//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//dp[i][j] = 0 if obstacleGrid[i][j] = 1
//dp[i][j] = dp[i - 1][j] + dp[i][j - 1] if obstacleGrid[i][j] = 0
class Solution {
public:
    int dp[105][105];
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) 
    {
        size_t nRow = obstacleGrid.size();
        size_t nCol = obstacleGrid[0].size();
        
        for(size_t i = 0;i != nRow;i++)
            if(obstacleGrid[i][0])
                dp[i][0] = 0;
            else if(!i)
                dp[i][0] = 1;
            else
                dp[i][0] = dp[i - 1][0];
        
        for(size_t j = 0;j != nCol;j++)
            if(obstacleGrid[0][j])
                dp[0][j] = 0;
            else if(!j)
                dp[0][j] = 1;
            else
                dp[0][j] = dp[0][j - 1];
        
        for(size_t i = 1;i != nRow;i++)
            for(size_t j = 1;j != nCol;j++)
                if(obstacleGrid[i][j])
                    dp[i][j] = 0;
                else
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        return dp[nRow - 1][nCol - 1];
                    
    }
};
