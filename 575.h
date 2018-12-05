#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>
#include <stack>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    int distributeCandies(std::vector<int>& candies) {
        /*
		int ans = 0;
        std::unordered_set<int> s;
        FOR(i, candies.size(), 0)
        	s.insert(candies[i]);
       	return std::(s.size(), candies.size()/2);
       	*/
       	bool mark[200001];
       	std::memset(mark, 0, sizeof(mark));
		int ans = 0;
		for (int x : candies) {
			if (!mark[x + 100000]) {
				mark[x + 100000] = true;
                if(++ans == candies.size() >> 1)return ans;
			}
		}
		return ans;
    }
};