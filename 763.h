#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    std::vector<int> partitionLabels(std::string s) {
		std::vector<int> ans;
		int book[26] = {0};
		FOR(i, s.length())
			book[s[i] - 'a'] = i;
		int ct = 0, flag = 0;
		FOR(i, s.length()){
			//std::cout << "ct: " << ct << "  flag: " << flag << "  s: " <<  s[i] << "  book: " << book[s[i]-'a'] << std::endl;
			ct = std::max(ct, book[s[i]-'a']);
			if(ct == i){	
				ans.push_back(ct - flag + 1);
				flag = ct + 1;
			}		
		}

		return ans;
    }
};