#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    int hammingDistance(int x, int y) {
        int flag = x^y;
        //std::cout << flag << std::endl;
		int ct = 0;
		while(flag){
			if(flag & 1 == 1)
				ct++;
			flag >>= 1;
		}
		return ct;
    }
};