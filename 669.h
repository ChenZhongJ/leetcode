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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
    	if(!root)
    		return root;
    		
      	if(root->val < L)
      		return trimBST(root->right, L, R);
   		else if(root->val > R)
   			return trimBST(root->left, L, R);
		else{
			root->left = trimBST(root->left, L, R);
			root->right = trimBST(root->right, L, R);
			return root;
		}
    
		/*  É§²Ù×÷ 
		if (!root) {
            return nullptr;
        }
        
        stack<TreeNode**> pending;
        pending.push(&root);
        
        do {
            TreeNode** nodeRef = pending.top();
            TreeNode* node = *nodeRef;
            
            const int val = node->val;
            if (val < L) {
                *nodeRef = node->right;
                if (!node->right) {
                    pending.pop();
                }
                continue;
            }
            if (val > R) {
                *nodeRef = node->left;
                if (!node->left) {
                    pending.pop();
                }
                continue;
            }
            // cur node is in range - pop to keep it
            pending.pop();
            
            // push left and right locations
            if (node->left) {
                pending.push(&(node->left));
            }
            if (node->right) {
                pending.push(&(node->right));
            }
        } while(pending.size() > 0);
        
        return root;
		
		*/
	}
};