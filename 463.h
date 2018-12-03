#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
	
    int islandPerimeter(std::vector<std::vector<int> >& grid) {
    	int step[4][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
		int x, y, tx, ty, cur_x, cur_y, ans;
		x = grid[0].size();
		y = grid.size();
		tx = ty = cur_x = cur_y = ans = 0;
		while(cur_x < x && cur_y < y){
			
			if(grid[cur_y][cur_x] == 1){
				FOR(i, 4, 0){
					tx = step[i][0] + cur_x;
					ty = step[i][1] + cur_y;
					//std::cout << "y: " << step[0][i] << "   x: " << step[i][0] << " ty: " << ty << "    tx: " << tx << std::endl;
					if(tx < 0 || tx >= x || ty < 0 || ty >= y || grid[ty][tx] == 0)
						ans++;
						
				} 
			}
			
			//std::cout << cur_y << " " << cur_x << " " << grid[cur_y][cur_x] << " " << ans << std::endl;
		
			cur_x++;
			if(cur_x == x){
				cur_x = 0;
				cur_y++;
			}
		}
		
		//std::cout << ans << std::endl;
		return ans;
    }
};