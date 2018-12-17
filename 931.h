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

class Solution {
public:
    int minFallingPathSum(std::vector<std::vector<int> >& mp) {
 		int len = mp.size();
       	FOR(i, mp.size(), 1, 1)
       		FOR(j, mp[0].size(), 0, 1)
					mp[i][j] += std::min({mp[i-1][j], mp[i-1][std::max(0, j-1)], mp[i-1][std::min(len-1, j+1)]});   	
    	return *min_element(mp[len-1].begin(), mp[len-1].end());
    }
};