//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * 1.filter prefix space
 * 2.take care of integer overflow
 */
class Solution {
public:
    int atoi(const char *str)
    {
    	while(str && *str == ' ')
    		str++;
    	if(!str)
    		return 0;
    	int result = 0;
    	int isPositive = 1;
    	if(*str == '+')
    		str++;
    	else if(*str == '-')
    		isPositive = -1,str++;
    	while(str && isdigit(*str))
    	{
    		if(isPositive == 1)
    		{
    			int tmp = INT_MAX / 10;
    			if(result > tmp || (result == tmp && INT_MAX % 10 < (*str - '0')))
    				return INT_MAX;
    		}
    		else
    		{
    			int tmp = INT_MIN / 10;
    			if(result < tmp || (result == tmp && INT_MIN % 10 > isPositive * (*str - '0')))
    				return INT_MIN;
    		}
    		result = result * 10 + isPositive * (*str++ - '0');
    	}
    	return result;
    }
};
