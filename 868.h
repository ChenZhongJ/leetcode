#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>
#include <stack>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    int binaryGap(int n) {
        /*
        int flag, ct, maxx;
        flag = ct = maxx = 0;
        while(n){
        	if(n&1){
        		if(flag != 0)
        			maxx = std::max(ct+1, maxx);
	        	flag++;
	        	ct = 0;
			}else{
      			ct++;	
        	}
        	n >>= 1;
       		//std::cout << n << std::endl;
        }
        if(flag == 1)
        	return 0;
		else 
        	return maxx;
 		*/
 		int ret = 0, i = 0, d;
        int prev = 100;
        while(n > 0) {
            if(n & 1) {
                d = i - prev;
                ret = std::max(ret, d);
                prev = i;
            }
            n >>= 1;
            ++i;
        }
        
        return ret;
    }
};