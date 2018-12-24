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
    bool isMonotonic(std::vector<int>& a) {
		bool inc = 1, dec = 1;
 		
	 	FOR(i, a.size(), 1, 1)
	 		inc &= a[i - 1] <= a[i], dec &= a[i - 1] >= a[i];

	 	return inc || dec;
    }
};