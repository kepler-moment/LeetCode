//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//dfs
class Solution {
public:
    vector<string> result;
    vector<string> letterCombinations(string digits)
    {
    	string keyboard[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string str;
        dfs(keyboard,digits,0,str);
        return result;
    }

    void dfs(string keyboard[],string digits,size_t s,string str)
    {
        if(s == digits.size())
        {
            result.push_back(str);
            return;
        }
        while(!keyboard[digits[s] - '0'].size())
            s++;
        int digit = digits[s] - '0';
        for(size_t i = 0;i != keyboard[digit].size();i++)
            dfs(keyboard,digits,s + 1,str + keyboard[digit][i]);
    }
};

