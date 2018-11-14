#include<iostream>

using namespace std;

class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int ans = 0;
        if(root->val >=L && root->val<=R) {
            ans += root->val;
        }
        if(root -> left != NULL){
            
            ans += rangeSumBST(root->left, L, R);
        }
        if(root -> right != NULL){
            
            ans += rangeSumBST(root->right, L, R);
        }
        return ans;
    }
};