#include <iostream>
#include <string>
#include <set>
#include <vector>
#define FOR(x, y) for(int x=0; x<y; x++)
class Solution {	
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    	set<string> s;
   		std::string mp[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
		string str = "";
		FOR(i, words.size()){
			str = "";
			FOR(j, words[i].length()){
				str += mp[words[i][j] - 'a'];
			}
			s.insert(str);
		}   
		return s.size();
    }
};