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
    string addBinary(string a, string b) {
        string result;
        int carry = 0;
        int ia,ib;
        ia = a.length() - 1,ib = b.length() - 1;
        while(ia >= 0 && ib >= 0)
        {
        	int tmp = carry + (a[ia--] - '0') + (b[ib--] - '0');
        	result.insert(result.begin(),tmp % 2 + '0');
        	carry = tmp / 2;
        }

        addOne(result,a,ia,carry);
        addOne(result,b,ib,carry);
        //cout << carry << endl;
        if(carry)
        	result.insert(result.begin(),carry + '0');
        return result;
    }

    void addOne(string& result,string a,int s,int& carry)
    {
    	while(s >= 0)
    	{
    		int tmp = carry + (a[s--] - '0');
    		result.insert(result.begin(),tmp % 2 + '0');
    		carry = tmp / 2;
    	}
    }
};
