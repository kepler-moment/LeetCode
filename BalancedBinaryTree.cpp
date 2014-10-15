//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//implementation
class Solution
{
public:
	bool isblanced;

    bool isBalanced(TreeNode *root)
    {
        isblanced = true;
        dfs(root);
        return isblanced;
    }

    int dfs(TreeNode* root)
    {
    	if(!isblanced)
    		return 0;
    	if(!root)
    		return 0;
    	if(!root->left && !root->right)
    		return 1;
    	int left,right;
    	left = right = 0;
    	left = dfs(root->left);
    	right = dfs(root->right);
    	if(abs(left - right) > 1)
    	{
    		isblanced = false;
    		return 0;
    	}
    	return max(left,right) + 1;
    }
};
