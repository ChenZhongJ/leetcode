#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    int projectionArea(std::vector<std::vector<int> >& mp) {
        int top = 0, front = 0, left = 0;
        int f, l;
        FOR(i, mp.size()){
        	f = 0;
       		l = 0;
        	FOR(j, mp[0].size()){
	        	if(mp[i][j] != 0)
					top++;
				f = std::max(f, mp[i][j]);
				l = std::max(l, mp[j][i]);
	        }
	        front += f;
	        left += l;
        }
    
        return (top + left + front);
    }
};