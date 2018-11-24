#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
	std::vector<int> v;
    std::vector<int> preorder(Node* root) {
   		
   		dg(root);
			
		return v;
    }
    
    void dg(Node* root){
    	if(root == NULL)
			return;
		v.push_back(root->val);
		vector<Node*> children = root->children;
		if(children.size() == 0)
			return;
		FOR(i, children.size())
			dg(children[i]);
    }
};