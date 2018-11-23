#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y, z, q) for(int x=z; x<=y; x+=q)

class Solution {
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
public:
	std::vector<TreeNode*> allPossibleFBT(int n) {
		std::vector<std::vector<TreeNode*> > dp(n+1);
			
		dp[1].push_back({new TreeNode(0)});		
		
		if(n == 1)
			return dp[1];
			
		int r = 0;
		FOR(i, n, 3, 2)
			FOR(lf, i-2, 1f, 2){
				r = i - lf - 1;
				for(auto &ltree : dp[lf])
					for(auto &rtree : dp[r]){
						TreeNode *root = new TreeNode(0);
						root->left = ltree;
						root->right = rtree;
						dp[i].push_back(root);
					} 	
			}
		
		return dp[n];			    
	}
    
    
};
