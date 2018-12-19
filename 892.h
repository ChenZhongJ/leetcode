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
    int surfaceArea(std::vector<std::vector<int> >& g) {
        int res = 0, 
			n = g.size();
        FOR(i, n, 0, 1) {
            FOR(j, n, 0, 1){
                if (g[i][j]) 
					res += g[i][j] * 4 + 2;
                if (i) 
					res -= std::min(g[i][j], g[i - 1][j]) * 2;
                if (j)
				 	res -= std::min(g[i][j], g[i][j - 1]) * 2;
            }
        }
        return res;
    }
};