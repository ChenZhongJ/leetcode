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
    std::string reverseOnlyLetters(std::string str) {
       	int l = 0, 
			r = str.size()-1;
		while(l < r){
			if(!std::isalpha(str[l])){
				l++;
				continue;
			}
			if(!std::isalpha(str[r])){
				r--;
				continue;
			}
			std::swap(str[l], str[r]);
			l++;
			r--;	
		}
       	
        return str;
    }
};