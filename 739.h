#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>
#include <stack>
#include <queue>

#define FOR(x, y, z, q) for(int x=z; x<y; x+=q)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& t) {
        std::stack<std::pair<int, int> > s;
        FOR_RESERVE	(i,  0, t.size()-1){
            const int n = t[i];
			while(s.size() && s.top().second <= n){
                //std::cout << s.top().first << "  " << s.top().second << std::endl;
                s.pop();        
            }
	    		
            if(s.empty())
                t[i] = 0;
            else
                t[i] = s.top().first - i;
            
			//std::cout << endl;
            //std::cout << i << "   " << n << "   " << t[i] << std::endl;		
            s.emplace(i, n);
            //std::cout << endl;
        }
        return t;
    }
};