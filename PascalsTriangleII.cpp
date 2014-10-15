//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * optimized to use O(k) extra space by rolling array
 */
class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> result(1,1);
        for(int i = 1;i <= rowIndex;i++)
        {
        	int tmp = 1;
        	for(unsigned j = 1;j < result.size();j++)
        	{
        		int t = result[j];
        		result[j] = t + tmp;
        		tmp = t;
        	}
        	result.push_back(1);
        }
        return result;
    }
};
