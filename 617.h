#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        
        add(t1, t2);
        return t1;
    }
    
    void add(TreeNode* &t1, TreeNode* &t2){
    	if(t2 == NULL)
    		return;
   		if(t1 == NULL)
   			t1 = new TreeNode(t2->val);
		else
   			t1->val += t2->val;
   		add(t1->left, t2->left);
   		add(t1->right, t2->right);
   		return;
    }
};