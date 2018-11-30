#include <iostream>
#include <string>
#include <vector>
#include <deque>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
	int findComplement(int num){
		int res = 0, i = 0, bit;
        while(num){
            bit = num & 1;
            res = res | ((!bit)<<i);
            i++;
            num = num >> 1;
        }
        return res;
    }
};