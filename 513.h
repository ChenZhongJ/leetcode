#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>
#include <stack>

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
	int findBottomLeftValue(TreeNode* root) {
		std::queue<TreeNode*> q;
		std::queue<int> level;
		q.push(root);
		level.push(0);    
		int m = 0, l;
		while(q.size()){
			TreeNode *r = q.front(); 
			q.pop();
			l = level.front(); 
			level.pop();
			if(r->left) {
				q.push(r->left);
				level.push(l+1);
			}
			if(r->right){
				q.push(r->right);
				level.push(l+1);
			}
			if(l > m){
				m = l;
				root = r;
			}
		}    
	        return root->val;
	    }
};