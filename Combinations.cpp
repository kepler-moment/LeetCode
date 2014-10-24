//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//dfs
class Solution {
public:
	vector<vector<int> > result;

    vector<vector<int> > combine(int n, int k)
    {
    	vector<int> tmp;
    	dfs(1,n,k,tmp);
    	return result;
    }

    void dfs(int s,int n,int k,vector<int> r)
    {
        if(n - s + 1 < k)
            return;
        while(s <= n - k + 1)
        {
            if(k == 1)
            {
                r.push_back(s++);
                result.push_back(r);
                r.pop_back();
            }
            else
            {
                r.push_back(s++);
                dfs(s,n,k - 1,r);
                r.pop_back();
            }
        }
    }
};
