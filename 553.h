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
    std::string optimalDivision(std::vector<int>& nums) {
    	int len = nums.size();
		std::string str;
		FOR(i, len, 0, 1){
			if(i > 0)
				str += "/";
			if(i == 1 && len > 2)
				str += "(";
			str += std::to_string(nums[i]);
			if(i == len-1 && len > 2)
				str += ")";
		}    
		return str;
    }
};