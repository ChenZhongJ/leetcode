#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>
#include <stack>
#include <queue>

#define FOR(x, y, z, q) for(int x=z; x<y; x+=q)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
    	if(root == NULL)
    		return root;
  		std::queue<TreeNode*> q;
  		q.push(root);
  		TreeNode* t;
  		int len;
  		while(q.size()){
			len = q.size();
			FOR(i, len, 0, 1){
				t = q.front();
				q.pop();
				if(t->left != NULL || t->right != NULL)
					std::swap(t->left, t->right);
				if(t->left != NULL)
					q.push(t->left);
				if(t->right != NULL)
					q.push(t->right);
			}  	
		}
		return root;
    }
};