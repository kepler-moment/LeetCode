//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * define dp[i] as the profit of selling the stock at i-th day,obviously
 * dp[i] = prices[i] - min(prices[0,...i - 1])
 */
class Solution {
public:
    int maxProfit(vector<int> &prices) 
    {
        int maxProfit = 0;
        if(prices.size() == 0)
            return maxProfit;
        int minPrice = prices[0];
        for(size_t i = 0;i != prices.size();i++)
        {
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }
        return maxProfit;
    }
};
