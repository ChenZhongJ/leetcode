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
    std::vector<int> findDuplicates(std::vector<int>& nums) {
       	/*
	    std::vector<int> ans;
		std::map<int, int> mp;
		FOR(i, nums.size(), 0)
			mp[nums[i]]++;
		for(auto m : mp)
			if(m.second == 2)
				ans.push_back(m.first);
		return ans;
		*/
 		std::vector<int> res;
       	int idx;
  		FOR(i, nums.size(), 0){
       		// 将每个元素取反 
       		idx = std::abs(nums[i])-1;
            nums[idx] = -nums[idx];
         	//std::cout << idx << "   " << nums[idx] << "   " << nums[i] << std::endl;
            if(nums[idx] > 0) 
				res.push_back(std::abs(nums[i]));
        }
        
        return res;
    }
};