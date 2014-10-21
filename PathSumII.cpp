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
	vector<vector<int> > result;
    vector<vector<int> > pathSum(TreeNode *root, int sum)
    {
    	vector<int> v;
    	dfs(root,sum,v);
    	return result;
    }

    void dfs(TreeNode *root,int sum,vector<int> v)
    {
    	if(!root)
    		return;
    	if(!root->left && !root->right)
    	{
    		if(root->val == sum)
    		{
    			v.push_back(root->val);
    			result.push_back(v);
    		}
    		return;
    	}
    	v.push_back(root->val);
    	dfs(root->left,sum - root->val,v);
    	dfs(root->right,sum - root->val,v);
    }
};

