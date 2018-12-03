#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
	std::map<std::string, int> mp;
	
    std::vector<std::string> uncommonFromSentences(std::string a, std::string b) {
		std::vector<std::string> v;
		split_str(a);
		split_str(b);
		for(const auto &m : mp){
			if(m.second == 1)
				v.push_back(m.first);
			//std::cout << m.first << " " << m.second << std::endl;
		}
		return v;
    }
    
    void split_str(std::string s){
  		std::string str = "";
		for(auto c : s){
			if(c != ' ')
				str += c;
			else{
				mp[str]++;
				str = "";
			}
		}
		mp[str]++;
    }
};