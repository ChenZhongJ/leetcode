#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>
#include <stack>

#define FOR(x, y, z, q) for(int x=z; x<y; x+=q)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)
class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
  		int idx = nums[0];
		FOR(i, nums.size(), 1, 1)
			idx ^= nums[i];
		return idx;	
			
    }
};