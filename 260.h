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
    std::vector<int> singleNumber(std::vector<int>& nums) {
        if(!nums.size())
        	return {};
       	std::unordered_map<int, int> mp;
       	for(const auto n : nums){
	    	if(mp.count(n))
				mp[n]++;
			else
				mp[n] = 1;   	
    	}
    	std::vector<int> v;
    	for(const auto n : mp)
	    	if(n.second == 1)
	    		v.push_back(n.first);
	    return v;
    }
};