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
    int maxDepth(TreeNode *root)
    {
    	if(!root)
    		return 0;
    	return max(maxDepth(root->left),maxDepth(root->right)) + 1;
    }
};
