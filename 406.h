#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <algorithm>
#include <stack>

#define FOR(x, y, z, q) for(int x=z; x<y; x+=q)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    std::vector<std::pair<int, int> > reconstructQueue(std::vector<std::pair<int, int> >& people) {
        std::sort(people.begin(), people.end(), [&](const std::pair<int, int> a, std::pair<int, int> b){
        	return a.first > b.first || (a.first == b.first && a.second < b.second);
        });
        std::vector<std::pair<int, int> > v;
        FOR(i, people.size(), 0, 1)
        	v.insert(v.begin() + people[i].second, people[i]);
       	
       	return v;
    }
};