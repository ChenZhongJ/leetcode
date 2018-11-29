#include <iostream>
#include <string>
#include <vector>
#include <deque>

#define FOR(x, y, z) for(int x=z; x<y; x++)

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        
        if(root == NULL)
        	return 0;
        std::deque<Node*> q;
        q.push_front(root);
        
        int ans = 0, ct = 0;
        
		while(!q.empty()){
			ct = q.size();
			ans++;
			FOR(i, ct, 0){
				const auto& children = q.front()->children;
				for(auto child : children)
					q.push_back(child);	
				q.pop_front();
			}
		}
  		return ans;
    }
};