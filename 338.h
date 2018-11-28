#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=1; x<=y; x++)

class Solution {
public:
    std::vector<int> countBits(int num) {
        std::vector<int> v(num+1, 0);
        FOR(i, num)
        	v[i] = v[i&(i-1)] + 1;
       	return v;
    }
};