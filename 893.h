#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <pair>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    int numSpecialEquivGroups(std::vector<std::string>& a) {
        std::set<std::pair<std::string, std::string> > s;
        std::string str1, str2;
        for(auto str : a){
        	str1 = str2 = "";
        	FOR(i, str.length(), 0)
        		if(i&1)
        			str1 += str[i];
       			else
       				str2 += str[i];
			std::sort(str1.begin(), str1.end());
			std::sort(str2.begin(), str2.end());
			s.insert({str1, str2});
        }
        return s.size();
    }
};