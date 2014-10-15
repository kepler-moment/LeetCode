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
    bool hasPathSum(TreeNode *root, int sum)
    {
    	if(!root)
    		return false;
    	if(!root->left && !root->right)
    		return root->val == sum;
    	int tmp = sum - root->val;
    	return hasPathSum(root->left,tmp) ||
    		   hasPathSum(root->right,tmp);
    }
};
