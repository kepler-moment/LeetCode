//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 *  In ZigZag matrix zm,
 *  zm[i][j] = s[i + 2 * j] if j % (nRows - 1) == 0,else
 *  zm[i][j] = s[2 * j - i]
 */
class Solution {
public:
    string convert(string s, int nRows)
    {
    	if(nRows == 1)
    		return s;
        string result = "";
        for(int i = 0;i < nRows && result.length() < s.length();i++)
        {
        	for(int j = 0;result.length() < s.length();j += nRows - 1)
        		if(i % (nRows - 1))
        		{
        			int tmp = 2 * j + i;
        			if(j)
        			{
        				if(tmp - i * 2 >= (int)s.length())
        					break;
        				result.push_back(s[tmp - i * 2]);
        			}
        			if(tmp >= (int)s.length())
        				break;
        			result.push_back(s[tmp]);
        		}
        		else
        		{
        			int tmp = 2 * j + i;
        			if(tmp >= (int)s.length())
        				break;
        			result.push_back(s[tmp]);
        		}
        }
        return result;
    }
};
