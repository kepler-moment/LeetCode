//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//two points like 3Sum and 4Sum
class Solution {
public:
    int threeSumClosest(vector<int> &num, int target)
    {
    	sort(num.begin(),num.end());
    	int closest = 0xFFFFFFF;
    	bool flag = false;
        for(size_t i = 0;num.size() >= 3 && i <= num.size() - 3;)
        {
        	for(size_t j = i + 1,k = num.size() - 1;j < k;)
        	{
        		int tmp = num[i] + num[j] + num[k];
        		//cout << "tmp: " << tmp << endl;
        		if(tmp == target)
        			return tmp;
        		if(!flag)
        		{
        			flag = true;
        			closest = tmp;
        		}
        		else if(abs(target - tmp) < abs(target - closest))
        			closest = tmp;
        		//cout << "closest: " << closest << endl;
        		if(tmp < target)
        			j++;
        		else
        			k--;
        	}
        	size_t k = i;
        	while(k <= num.size() - 3 && num[i] == num[k]) k++;
        	i = k;
        }
        return closest;
    }
};