#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    int minAddToMakeValid(std::string S) {
        int ans = 0, ct = 0;
        FOR(i, S.length()){
        	if(S[i] == '(')
		 		ct++;
	 		else
	 			ct--;
 			if(ct == -1){
			 	ans++;
			 	ct++;
			 }
        }
        	
		
		return (ct + ans);
    }
};