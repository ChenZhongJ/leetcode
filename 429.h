#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>
#include <stack>
#include <queue>

#define FOR(x, y, z, q) for(int x=z; x<y; x+=q)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
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
    std::vector<std::vector<int> > levelOrder(Node* root) {
		if (root == NULL) 
			return {};
        std::vector<std::vector<int> > res; 
        std::queue<Node*> q; 
        q.push(root);
        int len;
        Node* n;
        while (!q.empty()){
            len = q.size();
            std::vector<int> level; 
            FOR(i, len, 0, 1){
                n = q.front();
                q.pop();
                level.push_back(n -> val); 
                for (auto node : n -> children) 
                     q.push(node); 
            }
            res.push_back(level);
        }
        return res; 
    }
};