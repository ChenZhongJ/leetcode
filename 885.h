#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y, z) for(int x=z; x<y; x++)

class Solution {
public:
	
	
    std::vector<std::vector<int> > spiralMatrixIII(int R, int C, int r, int c) {
  		
 		std::vector<std::vector<int> > mp;
 		mp.push_back({r,c});
 		int ct = 1, n = 1;
 		while(mp.size() != R*C){
  			FOR(i, ct, 0){
				c += n;
				if(r < R && c < C && r >= 0 && c >= 0)
					mp.push_back({r, c});  	
	  		}
			FOR(i ,ct, 0){
				r += n;
				if(r < R && c < C && r >= 0 && c >= 0)
					mp.push_back({r, c});  
			}
			ct++;
			n = -n;	
  		}
 
  		return mp;
    }
};