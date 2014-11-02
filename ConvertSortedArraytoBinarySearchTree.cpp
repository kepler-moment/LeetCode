//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//for List [0,n), every time we choice [n/2]th node to insert into the tree recursively
class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &num) 
    {
        if(!num.size())
            return NULL;
        TreeNode *root = (TreeNode*)malloc(sizeof(TreeNode));
        insert(root,num,0,num.size());
        return root;
    }
    
    //[l,r)
    void insert(TreeNode *root, vector<int>& num,size_t l,size_t r)
    {
        size_t mid = l + (r - l) / 2;
        root->val = num[mid];
        if(mid == l)
            root->left = NULL;
        else
        {
            TreeNode *left = (TreeNode*)malloc(sizeof(TreeNode));
            root->left = left;
            insert(left,num,l,mid);
        }
        if(mid == r - 1)
            root->right = NULL;
        else
        {
            TreeNode *right = (TreeNode*)malloc(sizeof(TreeNode));
            root->right = right;
            insert(right,num,mid + 1,r);
        }
    }
};
