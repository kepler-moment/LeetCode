//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//use queue
class Solution {
public:
    void connect(TreeLinkNode *root) 
    {
        if(!root)
            return;
        vector<TreeLinkNode*> v[2];
        int s = 0;
        v[s].push_back(root);
        while(!v[s].empty())
        {
            for(size_t i = 0;i != v[s].size();i++)
                if(i == v[s].size() - 1)
                    v[s][i]->next = NULL;
                else
                    v[s][i]->next = v[s][i + 1];
            int tmp = s ^ 1;
            v[tmp].clear();
            for(size_t i = 0;i != v[s].size();i++)
            {    
                if(v[s][i]->left)
                    v[tmp].push_back(v[s][i]->left);
                if(v[s][i]->right)
                    v[tmp].push_back(v[s][i]->right);
            }
            s ^= 1;
        }
    }
};
