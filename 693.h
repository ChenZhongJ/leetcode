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
    bool hasAlternatingBits(int n) {
        int flag, ct;
		flag = n&1;
		n >>= 1; 
		while(n){
			ct = n&1;
			if(flag == ct)
				return false;
			else 
				flag = ct;
			n >>= 1;
		}
		return true;
    }
};