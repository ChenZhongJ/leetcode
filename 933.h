#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

#define FOR(x, y, z, q) for(int x=z; x<=y; x+=q)

class RecentCounter {
public:
    RecentCounter() {
        
    }
    
    queue<int> q;
    
	int ping(int t) {
        
	    while(!q.empty() && q.front() < t-3000)
	        q.pop();
	    
	    q.push(t);
	    return q.size();    
	        
    }
};