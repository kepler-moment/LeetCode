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
    int lengthOfLastWord(const char *s)
    {
        int len = strlen(s);
        int r,l,i;
        i = len - 1;
        while(i >= 0 && s[i] == ' ')
        	i--;
        if(i < 0)
        	return 0;
        r = i;
        while(i >= 0 && s[i] != ' ')
        	i--;
        l = i + 1;
        return r - l + 1;
    }
};

