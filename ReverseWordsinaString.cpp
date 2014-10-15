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
    void reverseWords(string &s)
    {
    	string str = "";
    	int p = s.length() - 1;
    	while(p >= 0)
    	{
    		p = s.find_last_not_of(' ',p);
    		if(p == string::npos)
    			break;
    		int q = p;
    		q = s.rfind(' ',p);
    		join(str,s.substr(q + 1,p - q));
    		p = q;
    	}
    	s = str;
    }

    void join(string& s,string p)
    {
    	if(s == "")
    		s = p;
    	else
    		s += " " + p;
    }
};
