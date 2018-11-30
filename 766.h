#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <pair>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    bool isToeplitzMatrix(std::vector<std::vector<int> >& matrix) {
        const int m = matrix.size();
        const int n = m > 0 ? matrix[0].size() : 0;
        FOR(i, m, 1)
        	FOR(j, n, 1)
                if (matrix[i][j] != matrix[i - 1][j - 1])
                    return false;
        return true;
    }
};