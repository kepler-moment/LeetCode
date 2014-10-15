//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//implementation
class Solution {
public:
    vector<vector<int> > generate(int numRows)
    {
        vector<vector<int> > result;
        if(!numRows)
        	return result;
        vector<int> r(1,1);
        result.push_back(r);
        for(int i = 1;i < numRows;i++)
        {
        	r.clear();
        	for(unsigned j = 0;j < result[i - 1].size();j++)
        		if(!j)
        			r.push_back(1);
        		else
        			r.push_back(result[i - 1][j] + result[i - 1][j - 1]);
        	r.push_back(1);
        	result.push_back(r);
        }
        return result;
    }
};
