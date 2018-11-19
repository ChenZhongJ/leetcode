#include <iostream>
#include <string>
#include <vector>
#include <map>
#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    std::vector<std::string> findAndReplacePattern(std::vector<std::string>& words, std::string pattern) {
        
		std::vector<std::string> ans;
     	
     	for(std::string word : words)
	    	if(regx(word) == regx(pattern))
	    		ans.push_back(word);
	    		
		return ans;
    }
    
    std::string regx(std::string word){
		
		std::map<char, int> mp;    	
		FOR(i, word.size())
			if(!mp.count(word[i]))
				mp[word[i]] = mp.size();
		FOR(i, word.size())
			word[i] = 'a' + mp[word[i]];
			
		return word;
    }
};