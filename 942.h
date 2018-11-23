#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    std::vector<int> diStringMatch(std::string s) {
        int minn = 0, maxx = s.length();
        int len = maxx+1; 
		std::vector<int> book;
        FOR(i, len)
			if(s[i] == 'I')
				book.push_back(minn++);
			else
				book.push_back(maxx--);
		return book; 
    }
};