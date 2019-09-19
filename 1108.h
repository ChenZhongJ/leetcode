#include <iostream>
#include <string>
#include <regex>

#define FOR(x, y, z) for(int x=z; x<y; x++)

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {

        regex rx ("[^0-9]");

        address = regex_replace(address, rx, "[.]");

        
        return address;
    }
};