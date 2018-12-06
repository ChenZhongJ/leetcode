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
    std::vector<std::vector<int> > matrixReshape(std::vector<std::vector<int> >& nums, int r, int c) {
        int x = nums[0].size(),
        	y = nums.size();
        if((x*y != r*c) || (y == r) || (x == c))
	   		return nums;
	   		
	   	std::vector<std::vector<int> > v(r, std::vector<int>(c));	
	   	
		FOR(i, x*y, 0)
			v[i/c][i%c] = nums[i/x][i%x];
   		return v;
    }
};