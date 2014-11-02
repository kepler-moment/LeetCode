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
    TreeNode *sortedListToBST(ListNode *head) 
    {
        if(!head)
            return NULL;
        int numOfNodes = 0;
        ListNode *p = head;
        while(p)
        {
            ++numOfNodes;
            p = p->next;
        }
        TreeNode *root = (TreeNode*)malloc(sizeof(TreeNode));
        insert(root,head,numOfNodes);
        return root;
    }
    
    //[0,r)
    void insert(TreeNode *root,ListNode *head,int r)
    {
        ListNode *p = head;
        int i = 0;
        while(i < r / 2)
        {
            p = p->next;
            ++i;
        }
        root->val = p->val;
        if(i)
        {
            TreeNode *left = (TreeNode*)malloc(sizeof(TreeNode));
            root->left = left;
            insert(left,head,i);
        }
        else
            root->left = NULL;
        if(i < r - 1)
        {
            TreeNode *right = (TreeNode*)malloc(sizeof(TreeNode));
            root->right = right;
            insert(right,p->next,r - i - 1);
        }
        else
            root->right = NULL;
    }
};
