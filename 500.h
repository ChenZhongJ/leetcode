#include <iostream>
#include <string>
#include <vector>
#include <deque>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    std::vector<std::string> findWords(std::vector<std::string>& words) {
    	int m[] = { 2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3 };
        std::vector<std::string> v;
        std::string str;
       	int flag, cur;
	   	for(auto w : words){
    		if(w.length() == 0)
    			continue;
  			flag = 1;
   			str = w;
		  	std::transform(str.begin(), str.end(), str.begin(), std::tolower);
   			cur = m[str[0] - 'a'];
			FOR(i, str.length(), 1)
				if(cur != (m[str[i] - 'a'])){
					flag = 0;
					break;
				}   	
			if(flag)
				v.push_back(w);
			
     	}
     	return v;
    }
};