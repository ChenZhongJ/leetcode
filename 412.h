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
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> v;
        FOR(i, n+1, 1){
        	if(!(i%3) && !(i%5))
        		v.push_back("FizzBuzz");
       		else if(!(i%3))
       			v.push_back("Fizz");
 			else if(!(i%5))
 				v.push_back("Buzz");
			else 
				v.push_back(std::to_string(i));
        }
           
        return v;
    }
};