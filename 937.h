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
	
    std::vector<std::string> reorderLogFiles(std::vector<std::string>& logs) {
     	std::stable_sort(logs.begin(), logs.end(), [&](const std::string a, const std::string b){
	     	int i = a.find_first_of(' '), 
			 	j = b.find_first_of(' ');
	     	bool flagi = isdigit(a[i+1]),
	     		 flagj = isdigit(b[j+1]);
  		 	return (!flagi && !flagj) ? a.substr(i+1) < b.substr(j+1) : !flagi;
	     });
		return logs;
    }
};