//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//stack
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) 
    {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode* r = root;
        while(r)
        {
            s.push(r);
            r = r->left;
        }
        while(!s.empty())
        {
            r = s.top();
            s.pop();
            result.push_back(r->val);
            if(r->right)
            {
                r = r->right;
                while(r)
                {
                    s.push(r);
                    r = r->left;
                }
            }
        }
        return result;
    }
};
