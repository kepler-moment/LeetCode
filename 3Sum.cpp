//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * define a + b + c = 0
 * firstly, sort num non-descending, then
 * enumerate a = num[i] and b = num[j] (j > i),then
 * binary search num[j + 1,...num.size() - 1] to find c
 * time complexity is O(n^2lgn)
 */
class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num)
    {
    	vector<vector<int> > result;
        sort(num.begin(),num.end());
        size_t i = 0;
        while(num.size() > 2 && i < num.size() - 2)
        {
        	for(size_t j = i + 1;j < num.size() - 1;)
        	{
        		int tmp = num[i] + num[j];
        		size_t r = binary_search(num,j + 1,num.size() - 1,-tmp);
        		if(r)
        		{
        			vector<int> res;
        			res.push_back(num[i]);
        			res.push_back(num[j]);
        			res.push_back(num[r]);
        			result.push_back(res);
        		}
        		size_t k = j;
        		while(k < num.size() - 1 && num[k] == num[j]) k++;
        		j = k;
        	}
        	size_t k = i;
        	while(k < num.size() - 2 && num[k] == num[i]) k++;
        	i = k;
        }
        return result;
    }

    size_t binary_search(vector<int> &num,size_t low,size_t high,int x)
    {
    	size_t mid;
    	while(low <= high)
    	{
    		mid = low + (high - low) / 2;
    		if(num[mid] == x)
    			return mid;
    		if(num[mid] < x)
    			low = mid + 1;
    		else
    			high = mid - 1;
    	}
    	return 0;
    }
};
