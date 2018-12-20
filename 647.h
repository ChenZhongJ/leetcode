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
    int countSubstrings(std::string s) {
        int ans = 0,
        	len = s.size();
       	FOR(i, len, 0, 1){
       		for(int j=0; j+i<len && i-j>=0 && s[i-j] == s[i+j]; j++)
       			ans++;
      		for(int j=0; j+i<len && i-j-1>=0 && s[i-j-1] == s[i+j]; j++)	
    			ans++;
       	}
       	return ans;
	}	
};