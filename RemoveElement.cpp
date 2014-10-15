//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * process like partition function in quick sort
 */
class Solution {
public:
    int removeElement(int A[], int n, int elem)
    {
    	if(!n)
    		return 0;
    	int low,high;
    	low = 0,high = n - 1;
    	int key = A[0];
    	while(low < high)
    	{
    		while(low < high && A[high] == elem)
    			high--;
    		A[low] = A[high];
    		while(low < high && A[low] != elem)
    			low++;
    		A[high] = A[low];
    	}
    	A[low] = key;
    	return low + (key != elem);
    }
};
