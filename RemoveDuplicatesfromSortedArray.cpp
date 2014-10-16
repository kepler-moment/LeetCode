//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//implementation
class Solution
{
public:
    int removeDuplicates(int A[], int n)
    {
    	int k = 0,i = 0;
    	while(i < n)
    	{
    		int j = i;
    		while(j < n && A[i] == A[j])
    			j++;
    		if(j == n)
    			return k + 1;
    		A[++k] = A[j];
    		i = j;
    	}
    	return k;
    }
};