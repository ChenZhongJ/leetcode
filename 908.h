#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    int smallestRangeI(vector<int>& a, int k) {
  
  		int minn = 10001, maxx = -1; 
   		for(int n : a){
			minn = std::min(minn, n);
			maxx = std::max(maxx, n);	   
	   }
	   return std::max((maxx - minn - 2*k), 0);
    }
};