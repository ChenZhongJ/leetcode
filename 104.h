#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>
#include <stack>

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
    int maxDepth(TreeNode* root) {
    	if(!root)
            return 0;
		std::queue<TreeNode*> q;
        q.push(root);
        int ans = 0, len;
		while(!q.empty()){
			ans++;
			len = q.size();
			FOR(i, len, 0){
				TreeNode *t = q.front();
				q.pop();
				if(t->left)
					q.push(t->left);
				if(t->right)
					q.push(t->right);
			}
        }
        return ans;
        /*
        	if(!root)
            	return 0;
        	return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
       	*/
    }
};