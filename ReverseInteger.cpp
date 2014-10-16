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
    int reverse(int x)
    {
    	int flag = 1,s;
        if(x < 0)
        	flag = -1;
        x *= flag;
        s = 0;
        while(x)
        {
        	s = s * 10 + x % 10;
        	x /= 10;
        }
        return s * flag;
    }
};