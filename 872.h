#include <iostream>
#include <string>
#include <vector>
#include <deque>

#define FOR(x, y, z) for(int x=z; x<y; x++)
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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    	
    	std::vector<int> v1;
    	std::vector<int> v2;
    	
    	search(root1, v1);
		search(root2, v2);
		
		if(v1.size() != v2.size())
			return false;
		FOR(i, v1.size(), 0)
			if(v1[i] != v2[i])
				return false;
		return true;    
    }
    
    void search(TreeNode* root, std::vector<int> &v){
    	
    	if(root == NULL)
    		return;
   		search(root->left, v);
    	search(root->right, v);
    	if(root->left == NULL && root->right == NULL)
    		v.push_back(root->val);
   		return;
	}
};