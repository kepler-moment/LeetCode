//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//preOrder traverse
class Solution {
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) 
    {
        vector<vector<int> > result;
        vector<TreeNode*> q[2];
        int now = 0;
        if(!root)
            return result;
        q[0].push_back(root);
        while(!q[now].empty())
        {
            vector<int> v;
            if(!now)
            {
                for(size_t i = 0;i != q[now].size();i++)
                    v.push_back(q[now][i]->val);
            }
            else
            {
                for(int i = q[now].size() - 1;i >= 0;i--)
                    v.push_back(q[now][i]->val);
            }
            result.push_back(v);
            int next = now ^ 1;
            q[next].clear();
            for(size_t i = 0;i != q[now].size();i++)
            {
                if(q[now][i]->left)
                    q[next].push_back(q[now][i]->left);
                if(q[now][i]->right)
                    q[next].push_back(q[now][i]->right);
            }
            now ^= 1;
        }
        return result;
    }
};
