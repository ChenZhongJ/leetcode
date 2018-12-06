#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>
#include <stack>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
	
    bool canVisitAllRooms(std::vector<std::vector<int> >& rooms) {
		std::vector<int> v(rooms.size());
		std::queue<int> q;
		q.push(0);
		v[0] = 1;
    	int cur;
		while(!q.empty()){
	    	cur = q.front();
	    	q.pop();
	    	v[cur] = 1;
	    	for(const int n : rooms[cur])
	    		if(v[n] == 0)
	    			q.push(n);
	    }
	    for(const int n : v)
	    	if(n == 0)
	    		return false;
	    return true;
    }
};