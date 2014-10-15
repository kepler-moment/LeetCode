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
    vector<int> plusOne(vector<int> &digits) {
        int carry = 1;
        //vector<int> result;
        for(int i = (int)digits.size() - 1;i >= 0;i--)
        {
        	int tmp = digits[i] + carry;
        	digits[i] = tmp % 10;
        	carry = tmp / 10;
        }
        if(carry)
        	digits.insert(digits.begin(),carry);
        return digits;
    }
};
