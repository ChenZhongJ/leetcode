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
    std::vector<int> nextGreaterElement(std::vector<int>& findNums, std::vector<int>& nums) {
        std::vector<int> v;
		std::unordered_map<int, int> mp;
		std::stack<int> s;
		for(const auto n : nums){
			while(!s.empty() && s.top() < n){
				mp[s.top()] = n;
				s.pop();
			}
			s.push(n);
		} 
		for(const auto n : findNums)
			v.push_back(mp.count(n) ? mp[n]: -1);
			
		return v;
    }
};