//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//using stack
class Solution {
public:
    int evalRPN(vector<string> &tokens) {
    	stack<int> num_stack;
    	for(unsigned i = 0;i < tokens.size();i++)
    	{
    		if(isdigit(tokens[i][0]) || (tokens[i][0] == '-' && tokens[i].length() > 1))
    			num_stack.push(parseInt(tokens[i]));
    		else
    		{
    			int r = num_stack.top();
    			num_stack.pop();
    			int l = num_stack.top();
    			num_stack.pop();
    			num_stack.push(cal(l,r,tokens[i][0]));
    		}
    	}
    	return num_stack.top();
    }

    int cal(int a,int b,char c)
    {
    	if(c == '+')
    		return a + b;
    	if(c == '-')
    		return a - b;
    	if(c == '*')
    		return a * b;
    	return a / b;
    }

    int parseInt(string s)
    {
    	int n = 0;
    	for(int i = (s[0] == '-' ? 1 : 0);s[i];i++)
    		n = n * 10 + (s[i] - '0');
    	return n * (s[0] == '-' ? -1 : 1);
    }
};
