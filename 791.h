#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
	/*
	static std::map<char, int> mp;
    
	static bool cmp(char a, char b){
		return mp[a] < mp[b];
	}
	*/
	
	std::string customSortString(std::string s, std::string t) {	
		/*
		FOR(i, s.length(), 0)
			mp[s[i]] = i+1;
		std::sort(t.begin(), t.end(), cmp);
		*/
		std::sort(t.begin(), t.end(), [&](char a, char b){return s.find(a) < s.find(b);});
		
		//std::cout << t << std::endl;	
		
    	return t;
	}
};
// Static variables have to be declared outside the class(that's what the last line does). 
// It was necessary to create a static variable in the first place because the comparator function is always static.
//std::map<char, int> Solution::mp;