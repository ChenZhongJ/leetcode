#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    std::vector<std::vector<int> > transpose(std::vector<std::vector<int> >& a) {
    	if(a.size() == 0)
    		return {};
  		std::vector<std::vector<int> > v(a[0].size(), std::vector<int> (a.size()));
	   	FOR(i, a[0].size())
			FOR(j, a.size())
		 		v[i][j] = a[j][i];
	   return v;
    }
};