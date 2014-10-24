//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * two points
 */
class Solution
{
public:
    vector<vector<int> > fourSum(vector<int> &num, int target)
    {
        vector<vector<int> > result;
        sort(num.begin(),num.end());
        for(size_t i = 0;num.size() >= 4 && i <= num.size() - 4;)
        {
        	for(size_t j = i + 1;j <= num.size() - 3;)
        	{
        		for(size_t x = j + 1,y = num.size() - 1;x < y;)
        		{
        			int tmp = target - num[i] - num[j];
        			if(num[x] + num[y] == tmp)
        			{
        				vector<int> r;
        				r.push_back(num[i]);
        				r.push_back(num[j]);
        				r.push_back(num[x]);
        				r.push_back(num[y]);
        				result.push_back(r);
        				size_t h = x;
        				while(h < y && num[h] == num[x]) h++;
        				x = h;
        				h = y;
        				while(x < h && num[h] == num[y]) h--;
        				y = h;
        			}
        			else if(num[x] + num[y] < tmp)
        				x++;
        			else
        				y--;
        		}
        		size_t h = j;
        		while(h <= num.size() - 3 && num[h] == num[j]) h++;
        		j = h;
        	}
        	size_t h = i;
        	while(h <= num.size() - 4 && num[h] == num[i]) h++;
        	i = h;
        }
        return result;
    }
};
