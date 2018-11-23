#include<iostream>
#include<vector>

#define FOR(x, y, z) for(int x=z; x<y; x++)

class Solution {
public:
    int peakIndexInMountainArray(std::vector<int>& A) {
        int max = 0, ct = 0;
        FOR(i, A.size(), 0){
            if(max < A[i]){
                max = A[i];
                ct = i;
            }else if(max > A[i])
                break;
        }
        return ct;
    }
};