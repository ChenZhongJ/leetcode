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
    int numberOfArithmeticSlices(std::vector<int>& a) {
        int ct = 0,
        	add = 0;
       	FOR(i, a.size(), 2, 1){
	    	if(a[i-1] - a[i] == a[i-2] - a[i-1])
				ct += ++add;
			else	
				add = 0;   	
    	}
    	return ct;
    }
};