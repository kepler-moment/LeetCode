//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//level order traverse
class Solution
{
public:
	  bool isSymmetric(TreeNode *root)
	  {
		  if(!root)
			  return true;
		  vector<TreeNode*> q;
		  q.push_back(root);
		  while(!q.empty())
		  {
			  int i,j;
			  i = 0,j = q.size() - 1;
			  while(i <= j)
			  {
				  if(i == j)
				  {
					  if((q[i]->left && !q[i]->right) || (!q[i]->left && q[i]->right))
						  return false;
					  if(q[i]->left && q[i]->left->val != q[i]->right->val)
						  return false;
					  i++,j--;
					  break;
				  }
				  if((q[i]->left && !q[j]->right) || (!q[i]->left && q[j]->right))
					  return false;
				  if((q[i]->right && !q[j]->left) || (!q[i]->right && q[j]->left))
					  return false;
				  if(q[i]->left && q[i]->left->val != q[j]->right->val)
					  return false;
				  if(q[i]->right && q[i]->right->val != q[j]->left->val)
					  return false;
				  i++,j--;
			  }
			  i = 0;
			  vector<TreeNode*> tmp;
			  while(i < (int)q.size())
			  {
				  if(q[i]->left)
					  tmp.push_back(q[i]->left);
				  if(q[i]->right)
					  tmp.push_back(q[i]->right);
				  i++;
			  }
			  q = tmp;
		  }
		  return true;
	  }
};

