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
    bool validateStackSequences(std::vector<int>& pushed, std::vector<int>& popped) {
    	std::stack<int> s;
    	int cur = 0;
		for(const int n : pushed){
	    	s.push(n);
	    	while(s.size() && s.top() == popped[cur]){
	    		s.pop();
	    		cur++;
	    	}
	    }
        return s.empty();
    }
};