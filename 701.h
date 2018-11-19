#include <iostream>
#include <string>
#include <vector>
#include <map>
#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

public:
    
    TreeNode* insert(int num, TreeNode *p){
    	
    	if(p == NULL)
    		p = new TreeNode(num);
   		else if(num < p->val)
   			p->left = insert(num, p->left);
		else
			p->right = insert(num, p->right);
    	
    	return p;
    }
    /*
    void fun(TreeNode* p){
    	if(p == NULL)
    		return;
   		fun(p->left);
	  	std::cout << p.val << "  ";
	  	fun(p->right);
    }
    */
	TreeNode* insertIntoBST(TreeNode* root, int val) {
        //fun(root); 
        root = insert(val, root);
       	
       	return root;
    }
};