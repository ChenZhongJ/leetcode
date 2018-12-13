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
    std::vector<int> largestValues(TreeNode* root) {
    	if(root == NULL)
    		return {};
        std::vector<int> v;
        std::queue<TreeNode*> q;
        q.push(root);
        TreeNode* t;
        int len, maxx;
        while(q.size()){
        	len = q.size();
			FOR(i, len, 0, 1){
				t = q.front();
        		q.pop();
        		if(i == 0)
	        		maxx = t->val;
        		else
        			maxx = std::max(maxx, t->val);
       			if(t->left != NULL)
       				q.push(t->left);
				if(t->right != NULL)
					q.push(t->right);
			}
			v.push_back(maxx);
        }
        return v;
    }
};