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
    bool isSameTree(TreeNode *p, TreeNode *q) {
    	if(!p && !q)
    		return true;
        if(parseBool(p) && parseBool(q) && p->val == q->val)
        	return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        return false;
    }

    bool parseBool(TreeNode *p)
    {
    	return p;
    }
};
