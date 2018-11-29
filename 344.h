#include <iostream>
#include <string>
#include <vector>
#include <deque>

#define FOR(x, y, z) for(int x=z; x<y; x++)

class Solution {
public:

    std::string reverseString(std::string s) {
        int n = s.length();
        std::string res = s;
        FOR(i, n, 0)
            res[i] = s[n-i-1];
        return res;
        
		//reverse(s.begin(), s.end());
        //return  s;
		
    }
};