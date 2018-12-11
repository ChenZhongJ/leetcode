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
    std::vector<double> averageOfLevels(TreeNode* root) {
        std::vector<double> v;
        v.push_back(root->value);
		if(root->left == NULL && root->right == NULL)
			return v;
		std::queue<TreeNode *> q;
		if(root->left != NULL)
			q.push(root->left);
		if(root->right != NULL)
			q.push(root->right);
		
        int len;
        double sum;
        TreeNode* t;
        while(q.size()){
        	len = q.size();
        	sum = 0.0;
        	FOR(i, len, 0, 1){
        		t = q.front();
        		q.pop();
	        	sum += t->value;
	        	if(t->left != NULL)
					q.push(t->left);
				if(t->right != NULL)
					q.push(t->right);
	        }
	        v.push_back(sum*1.0/len);
        }
        return v;
    }
};