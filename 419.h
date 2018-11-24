#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:

    int countBattleships(std::vector<std::vector<char> >& mp) {
    	
    	int x = mp[0].size();
    	int y = mp.size();
    	
    	bool flag;
    	int ct = 0;
    	FOR(i, x){
	    	FOR(j, y){
	    		if(mp[j][i] == 'X'){
   					flag = true;
		    		if(i > 0) 
						flag = flag && (mp[j][i-1] == '.');
					if(j > 0)
						flag = flag && (mp[j-1][i] == '.');
					if(flag)
						++ct;
		    	}
	    	}
	    }
	    
	    return ct;
    }
};