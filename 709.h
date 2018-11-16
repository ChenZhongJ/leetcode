#include <iostream>
#include <string>
#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    string toLowerCase(string str) {
        FOR(i, str.length())
        	if('A' <= str[i] && str[i] <= 'Z')
        		str[i] += 32;
        return str;
    }
};