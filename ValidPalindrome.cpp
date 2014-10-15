//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//implementation
//ps: s may contain digits
class Solution {
public:
    bool isPalindrome(string s) {
        if(!s.length())
        	return true;
        int i,j;
        i = 0,j = s.length() - 1;
        while(i < j)
        {
        	while(i < j && !isalpha(s[i]) && !isdigit(s[i]))
        		i++;
        	while(j > i && !isalpha(s[j]) && !isdigit(s[j]))
        		j--;
        	if(s[i] != s[j] && tolower(s[i]) != tolower(s[j]))
        		return false;
        	i++,j--;
        }
        return true;
    }

    char tolower(char c)
    {
    	if(islower(c))
    		return c;
    	if(isupper(c))
    	    return 'a' + (c - 'A');
    	return c;
    }
};
