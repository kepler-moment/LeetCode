//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//binary search
class Solution {
public:
    int findMin(vector<int> &num)
    {
        assert(num.size() > 0);
        return findMin(0,num.size() - 1,num);
    }

    int findMin(size_t s,size_t e,vector<int>& num)
    {
        size_t low,mid,high;
        low = s,high = e;
        while(low < high)
        {
            mid = low + (high - low) / 2;
            if(num[mid] > num[high])
                low = mid + 1;
            else
                high = mid;
        }
        return num[low];
    }
};
