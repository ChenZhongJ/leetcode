#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)
#define FOR_REVERSE(x, y, z) for(int x=z; x>=0; x--)

class Solution {
public:
    std::vector<std::vector<int> > flipAndInvertImage(std::vector<std::vector<int> >& A) {
        int len = A[0].size();
        int mid = len/2;
        int flag = 0;
		if(len%2 != 0) flag = 1;
        FOR(i, A.size()){
        	FOR(j, mid){
        		//std::cout << i << "  "  << j << "  " << (len-j-1) << std::endl;
      			//std::cout << A[i][j] << "  " << A[i][len-j-1] << std::endl;
	    		std::swap(A[i][j], A[i][len-j-1]);
	    		//std::cout << A[i][j] << "  " << A[i][len-j-1] << std::endl;
    			A[i][j] = -(A[i][j] - 1);
	    		A[i][len-j-1] = -(A[i][len-j-1] - 1);
	    		//std::cout << A[i][j] << "  " << A[i][len-j-1] << std::endl;
	        }
	        if(flag)
	        	A[i][mid] = -(A[i][mid] - 1);
        	
        }
		/*
        FOR(i, A.size()){
        	FOR(j, len)
        		std::cout << A[i][j] << "  ";
        	std::cout << std::endl;
        }
        */
		return A;
    }
};