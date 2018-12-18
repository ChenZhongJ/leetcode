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
	bool isVowel(char c){
		c = std::tolower(c);
		return  (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	}
    std::string toGoatLatin(std::string s) {
        int ct = 1, flag = 1;
        std::string str = "",
					append  = "maa",
				    c = "";
		FOR(i, s.size(), 0, 1){
			if(s[i] == ' '){
				str += c;
				str += append;
				append += "a";
				str += " ";
				flag = 1;
				continue;
			}
        //std::cout << flag << std::endl;
			if(flag){
				if(isVowel(s[i])){
					str += s[i];
					c = "";
           }else
					c = s[i]; 
				flag = 0;
			}else
				str += s[i];
        //std::cout << c << std::endl;
			//std::cout << s[i] << std::endl;
		} 
		str += c;
		str += append;
		return str;
    }
};
