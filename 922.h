#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y, z, q) for(int x=z; x<=y; x+=q)

class Solution {

static const int maxx = 10000 + 5;
	
public:
    std::vector<int> sortArrayByParityII(std::vector<int>& a) {
		int book[maxx];
		int ct = 0;
		FOR(i, a.size()-1, 0, 1){
			if(i&1 && !(a[i]&1))
				book[ct++] = i; 
		}
		ct = 0;
		FOR(i, a.size()-1, 0, 1){
			if(!(i&1) && (a[i]&1))
				std::swap(a[i], a[book[ct++]]);	
		}  

		return a;				  	    
    }
};