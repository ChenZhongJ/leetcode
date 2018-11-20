#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y, z) for(int x=z; x<=y; x++)

class Solution {
public:
    std::vector<int> selfDividingNumbers(int left, int right) {
        std::vector<int> v;
		int num, ct, flag;
		FOR(i, right, left){
			num = i;
			flag = 1;
			while(num){
				ct = num%10;
				num /= 10;	
				if(ct == 0 || i%ct != 0){
					flag = 0;
					break;
				}
			}
			if(flag)
				v.push_back(i);
		}
		return v;        
    }
};