#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define FOR(x, y, z) for(int x=z; x<y; x++)

class Solution {

std::vector<std::vector<int> > ans;

public:
    std::vector<std::vector<int> > allPathsSourceTarget(std::vector<std::vector<int> >& g) {
   		std::vector<int> path;		   
    	path.push_back(0);
    	dfs(g, path);
    	return ans;
	}
    
    void dfs(std::vector<std::vector<int> >& g, std::vector<int> path){
    	int ct = path.back();
		if(ct == g.size()-1){
			ans.push_back(path);
			return;
		}
		FOR(i, g[ct].size(), 0){
			path.push_back(g[ct][i]);
			dfs(g, path);
			path.pop_back();
		}
    }
}; 