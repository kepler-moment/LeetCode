//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//implementation, emulate using stack
class Solution {
public:
    bool isValid(string s)
    {
        stack<char> p;
        for(int i = 0;s[i];i++)
        {
        	if(p.empty())
        	{
        		if(isRight(s[i]))
        			return false;
        		p.push(s[i]);
        	}
        	else if(isLeft(s[i]))
        		p.push(s[i]);
        	else
        	{
        		char c = p.top();
        		p.pop();
        		if((c == '(' && s[i] != ')') || (c == '[' && s[i] != ']') || (c == '{' && s[i] != '}'))
					return false;
        	}
        }
        return p.empty();
    }

    bool isLeft(char c)
    {
    	return c == '(' || c == '[' || c == '{';
    }

    bool isRight(char c)
    {
    	return !isLeft(c);
    }
};