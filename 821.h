#include <iostream>
#include <string>
#include <vector>
#include <deque>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    std::vector<int> shortestToChar(std::string s, char c) {
    	std::vector<int> v;
    	std::vector<int> len;
    	FOR(i, s.length(), 0)
    		if(s[i] == c)
    			len.push_back(i);
 		int ct = -1, flag;
		FOR(i, s.length(), 0){
			if(s[i] == c)
				ct++;
			if(ct == -1)
				v.push_back(len[0] - i);
			else if( 0 <= ct && ct < (len.size()-1))
				v.push_back(std::min(std::abs(len[ct] - i), (std::min(std::abs(len[ct-1] - i), std::abs(len[ct+1] - i)))));
			else
				v.push_back(std::min(std::abs(len[ct] - i), std::abs(len[ct-1] - i)));
			
		}
		return v;	
    }
};