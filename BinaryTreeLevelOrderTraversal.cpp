//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//implementation by queue
class Solution {
public:
	vector<vector<int> > levelOrder(TreeNode *root)
    {
    	vector<vector<int> > result;
    	if(!root)
    		return result;
    	vector<TreeNode*> now;
    	now.push_back(root);
    	while(!now.empty())
    	{
    		vector<int> tmp;
    		for(unsigned i = 0;i < now.size();i++)
    			tmp.push_back(now[i]->val);
    		result.push_back(tmp);
    		vector<TreeNode*> next;
    		for(unsigned i = 0;i < now.size();i++)
    		{
    			TreeNode* t = now[i];
    			if(t->left)
    				next.push_back(t->left);
    			if(t->right)
    				next.push_back(t->right);
    		}
    		now = next;
    	}
    	return result;
    }
};
