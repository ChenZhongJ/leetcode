#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define FOR(x, y, z) for(int x=z; x<y; x+=2)

class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int sum = 0;
		FOR(i, nums.size(), 0)
			sum += min(nums[i], nums[i+1]);		        	
        return sum;
    }
}; 