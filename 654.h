#include <iostream>
#include <string>
#include <vector>
#define FOR(x, y) for(int x=0; x<y; x++)
#define FOR_OTHER(x, y, z) for(int x=z; x<y; x++)
class Solution {

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}*root;
public:
    TreeNode* constructMaximumBinaryTree(std::vector<int>& nums) {
		int index = 0;
		FOR(i, nums.size()) if(nums[index] < nums[i]) index = i;	
		
		root = new TreeNode(nums[index]);
		root->left = insert(nums, 0, index);
		root->right = insert(nums, index+1, nums.size());
   		
  		return root;
    }
    
    TreeNode *insert(std::vector<int>& nums, int l, int r){
		if(l >= r)
			return NULL;
			
		int index = l;
		
		FOR_OTHER(i, r, l) if(nums[index] < nums[i]) index = i;
		
		TreeNode *node = new TreeNode(nums[index]);
		
		node->left = insert(nums, l, index);
		node->right = insert(nums, index+1, r);
		
		return node;
	}
	/*
	void search(TreeNode *p){
		if(p){
			std::cout << p->val << std::endl;
			search(p->left);
			search(p->right);
		}
	}
	*/
};