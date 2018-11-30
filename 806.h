#include <iostream>
#include <string>
#include <vector>
#include <deque>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    std::vector<int> numberOfLines(std::vector<int>& widths, std::string s) {
        std::vector<int> v;
        int ct = 1, flag = 0, n;
        FOR(i, s.length(), 0){
        	n = s[i] - 'a';
			if(flag + widths[n] > 100){
				if((i == (s.length()-1)) && ((flag + widths[n]) < 100)){
					ct++;
					break;	
				}
				flag = 0;
				ct++;
			}
   			flag += widths[n];	
        }
        v.push_back(ct);
        v.push_back(flag);
        
        return v;
    }
};