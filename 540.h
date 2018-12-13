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
    int singleNonDuplicate(std::vector<int>& nums) {
        if(0 == nums.size())
        	return nums[0];
       	int l = 0, r = nums.size()-1, ct;
       	while(l < r){
			ct = l + (r-l)/2;
			if(ct%2 == 0)
				if(nums[ct] == nums[ct+1])
					l = ct + 2;
				else 
					r = ct;
			else
				if(nums[ct] == nums[ct-1])
					l = ct + 1;
				else
					r = ct - 1;		   	
    	}
    	return nums[l];
    }
};	