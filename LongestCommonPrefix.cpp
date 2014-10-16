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
    string longestCommonPrefix(vector<string> &strs)
    {
    	if(!strs.size())
    		return string("");
    	string str = strs[0];
    	for(unsigned i = 1;i < strs.size();i++)
    	{
    		str = longestCommonPrefix(str,strs[i]);
    		if(!str.length())
    			return str;
    	}
    	return str;
    }

    string longestCommonPrefix(string str1,string str2)
    {
    	unsigned i = 0;
    	while(i < str1.length() && i < str2.length() && str1[i] == str2[i])
    		i++;
    	return str1.substr(0,i);
    }
};
