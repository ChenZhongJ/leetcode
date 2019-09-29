#include <iostream>
#include <string>
#include <vector>
#include <stack>
#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_R(x, y, z) for(int x=z; x>=y; x--)

using namespace std;

/**
 * Definition for a binary tree node.
**/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public: 
    
    TreeNode *root;
    
    TreeNode* insert(int n, TreeNode *node){
        
        if(node == nullptr)
            return node = new TreeNode(n);

        if(n >= node->val)
            node->right = insert(n, node->right);
        else if(n < node->val)
            node ->left = insert(n, node->left);

        return node;
    }

    TreeNode* bstFromPreorder(vector<int>& v) {
        if(v.size() == 0)
            return nullptr;
        else if(v.size() == 1)
            return root = new TreeNode(v[0]);

        FOR(i, v.size(), 0)
            root = insert(v[i], root);
        
        return root;
    }
};