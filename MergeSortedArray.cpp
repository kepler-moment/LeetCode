//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//merge in place
class Solution {
public:
    void merge(int A[], int m, int B[], int n)
    {
        for(int i = m,j = 0;j < n;i++,j++)
        	A[i] = B[j];
        int i = 0,j = m;
        m += n;
        while(i < j && j < m)
        {
        	while(i < j && A[i] <= A[j]) i++;
        	int tmp = j;
        	while(j < m && A[j] <= A[i]) j++;
        	merge_inplace(A,i,tmp,j - 1);
        	i += j - tmp;
        }
    }

    void merge_inplace(int A[],int low,int mid,int high)
    {
    	reverse(A,low,mid - 1);
    	reverse(A,mid,high);
    	reverse(A,low,high);
    }

    void reverse(int A[],int s,int e)
    {
    	while(s < e)
    		swap(A[s++],A[e--]);
    }
};
