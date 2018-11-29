#include <iostream>
#include <string>
#include <vector>
#include <stack>

#define FOR(x, y, z) for(int x=z; x<y; x++)

class Solution {
public:
    string reverseWords(string s) {
        int i = 0; int size = s.size();
        while(i<size) {
            int j=i;
            while(j<size && s[j]!= ' ') j += 1;
            reverse(s.begin()+i, s.begin()+j);
            i = j+1;
        }
        return s;
    }
};