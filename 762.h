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

    int countPrimeSetBits(int l, int r) {
 	  	std::set<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
        int ans = 0, ct;
        FOR(i, r+1, l, 1) {
            ct = 0;
            for (int n = i; n; n >>= 1)
                ct += n & 1;
            ans += primes.count(ct);
        }
        return ans;
    }
};