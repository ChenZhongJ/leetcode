#include <iostream>
#include <string>
#include <vector>
#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {

public:
    vector<int> sortArrayByParity(std::vector<int>& A) {
       	int index = 0;
		FOR(i, A.size()) if(A[i]%2 == 0) swap(A[i], A[index++]);
		
		return A;
    }
};