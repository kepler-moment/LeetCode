//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//implementation
//use long long
class Solution {
public:
    bool isPalindrome(int x)
    {
    	if(x < 0)
    		return false;
        long long s = 0;
        int tmp = x;
        while(x)
        {
        	s = s * 10 + x % 10;
        	x /= 10;
        }
        return s == (long long)tmp;
    }
};