#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {	
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root == NULL)
        	return NULL;
       	root->left = pruneTree(root->left);
       	root->right = pruneTree(root->right);
       	if(root->val == 0 && root->left == NULL && root->right == NULL)
       		return NULL;
  		return root;
    }
};