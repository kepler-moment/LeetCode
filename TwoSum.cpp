//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#define N 1000000

struct Num
{
	int id,v;
}num[N];

bool cmp(Num n1,Num n2)
{
	return n1.v < n2.v;
}

/*
 * sorted the array,do binary search
 */
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
    	vector<int> result;
        for(unsigned i = 0;i < numbers.size();i++)
        	num[i].id = i,num[i].v = numbers[i];
        sort(num,num + numbers.size(),cmp);
        for(unsigned i = 0;i < numbers.size();i++)
        {
        	int low,mid,high;
            low = i + 1,high = numbers.size() - 1;
            while(low <= high)
            {
            	mid = (low + high) / 2;
            	if(num[mid].v + num[i].v == target)
            	{
            		result.push_back(min(num[i].id,num[mid].id) + 1);
            		result.push_back(max(num[i].id,num[mid].id) + 1);
            		return result;
            	}
            	if(num[mid].v + num[i].v < target)
            		low = mid + 1;
            	else
            		high = mid - 1;
            }
        }
        return result;
    }
};