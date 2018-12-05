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
	  
    bool stoneGame(std::vector<int>& piles) {
    	int a, b;
		a = b = 0;
		std::sort(piles.begin(), piles.end(), [&](int a, int b){return a>b;});
		FOR(i, piles.size(), 0)
			if(i&1)
				b += piles[i]; 
			else
				a += piles[i];
		return (a > b); 
    }
};