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
    int minDepth(TreeNode *root) {
        return dfs(root,0);
    }

    int dfs(TreeNode *root,int r)
    {
    	if(!root)
    		return 0;
    	if(!root->left && !root->right)
    		return r + 1;
    	int lmax1,lmax2;
    	lmax1 = lmax2 = 1000000000;
    	if(root->left)
    		lmax1 = dfs(root->left,r + 1);
    	if(root->right)
    		lmax2 = dfs(root->right,r + 1);
    	return min(lmax1,lmax2);
    }
};
