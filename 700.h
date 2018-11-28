#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
  		while(root != NULL && root->val != val)
			root = root->val > val ? root->left : root->right;
		return root;
    }
};