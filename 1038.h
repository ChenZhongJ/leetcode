#include <iostream>
#include <string>


#define FOR(x, y, z) for(int x=z; x<y; x++)

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:

    TreeNode* bstToGst(TreeNode* root) {
        
        dfs(root, 0);

        return root;
    }

    int dfs(TreeNode* node, int ct){
        
        if(node == nullptr)
            return ct;

        node->val += dfs(node->right, ct);

        return dfs(node->left, node->val);
    }
};