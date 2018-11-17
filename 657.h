#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    bool judgeCircle(string moves) {
        int row = 0, col = 0;
        FOR(i, moves.size()){
        	switch (moves[i]){
	        	case 'U': col += 1; break;
	        	case 'D': col -= 1; break;
	        	case 'L': row -= 1; break;
	        	case 'R': row += 1; break;
	        }
        }
        if(row == 0 && col == 0)
        	return true;
       	else
       		return false;
    }
};