//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//traverse the BST in order
class Solution {
public:
    vector<int> result;
    bool isValidBST(TreeNode *root) 
    {
        inOrder(root);
        for(size_t i = 1;i < result.size();i++)
            if(result[i] <= result[i - 1])
                return false;
        return true;
    }
    
    void inOrder(TreeNode* root)
    {
        if(!root)
            return;
        inOrder(root->left);
        result.push_back(root->val);
        inOrder(root->right);
    }
};
