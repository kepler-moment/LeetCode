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
    void flatten(TreeNode *root) 
    {
        dfs(root);
    }
    
    TreeNode* dfs(TreeNode *root)
    {
        if(!root)
            return NULL;
        if(!root->left && !root->right)
            return root;
        if(!root->right)
        {
            root->right = root->left;
            root->left = NULL;
        }
        if(!root->left)
            return dfs(root->right);
        TreeNode* tmp = dfs(root->left);
        TreeNode* tmp2 = dfs(root->right);
        tmp->right = root->right;
        root->right = root->left;
        root->left = NULL;
        return tmp2;
    }
};
