//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//implementation,number of contiguous digit < 10 in test
class Solution {
public:
    string countAndSay(int n)
    {
    	if(!n)
    		return NULL;
    	if(n == 1)
    		return string("1");
    	string s = "1";
    	for(int i = 2;i <= n;i++)
    	{
    		string tmp;
    		int j = 0;
    		while(j <  int(s.length()))
    		{
    			int k = j;
    			while(k < int(s.length()) && s[k] == s[j])
    				k++;
    			tmp.push_back(k - j + '0');
    			tmp.push_back(s[j]);
    			j = k;
    		}
    		s = tmp;
    	}
    	return s;
    }
};