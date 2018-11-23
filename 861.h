#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    
	int matrixScore(std::vector<std::vector<int> >& mx) {
  		
  		FOR(i, mx.size())
  			if(mx[i][0] == 0)
			  	flipRow(mx, i);
		int ct = 0;
		FOR(i, mx[0].size()){
			FOR(j, mx.size())
				if(mx[j][i] == 0)
					ct++;	
			if(ct > (mx.size()/2))
				flipCol(mx, i);  
			ct = 0;
		}
	
		return add(mx);
    }
    
    void flipRow(std::vector<std::vector<int> >& mx, int row){
    	
    	FOR(i, mx[0].size())
	    	mx[row][i] = 1 - mx[row][i];	
    
    }
    
    void flipCol(std::vector<std::vector<int> >& mx, int col){
    	
    	FOR(i, mx.size())
    		mx[i][col] = 1 - mx[i][col];
    }
    
    int add(std::vector<std::vector<int> >& mx){
    	int ans = 0;
    
    	FOR(i, mx.size()){
  			int num = 0;
	    	FOR(j, mx[0].size())
    			num = (num << 1) + mx[i][j];
   			//std::cout << num << std::endl;
   			ans += num;
	    }
		return ans;
    }
};