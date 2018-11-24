#include <iostream>
#include <string>
#include <vector>
#include <stack>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
	std::vector<int> postorder(Node* root) {
	    if(root == NULL) 
			return {};
	    std::vector<int> v;
	    
		std::stack<Node*> s;
	    s.push(root);
	    while(!s.empty()){
	    	
	        Node* temp = s.top();
	        s.pop();
	        FOR(i, temp->children.size())
	        	s.push(temp->children[i]);
	        v.push_back(temp->val);
	    }
	    
		reverse(v.begin(), v.end());
	    
		return v;
	}
};