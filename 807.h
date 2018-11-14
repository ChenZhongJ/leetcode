#include <iostream>
#include <vector>

using namespace std;

const int maxx = 50 + 5; 

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int> >& grid) {

        int ans = 0;
        int row[maxx], col[maxx];
       	for(int i=0; i<grid.size(); i++){
	       	for(int j=0; j<grid[0].size(); j++){
	       			if(i == 0)
						col[j] = grid[i][j];
					else
						col[j] = max(col[j], grid[i][j]);
				
		       		if(j == 0)
		       			row[i] = grid[i][j];
	       			else
	       				row[i] = max(row[i], grid[i][j]);
	        }
		}
		/*
		for(int i=0; i<grid.size(); i++)
			cout << row[i] << " ";
		cout << endl;
		for(int i=0; i<grid.size(); i++)
			cout << col[i] << " ";
		cout << endl;
		*/
		for(int i=0; i<grid.size(); i++)
	       	for(int j=0; j<grid[0].size(); j++){
	       		ans += (min(row[i], col[j]) - grid[i][j]);
	       		//cout << "ans " << ans << " num " <<  grid[i][j] << " row " << row[i] << " col " << col[j] << endl;
	       	}
	      
        return ans;
    }
};