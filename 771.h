#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
		
		int ans = 0;
		map<char, int> m;
		
		for(int i=0; i<J.length(); i++)
			m[J[i]] = 0;
		for(int i=0; i<S.length(); i++)
			if(m.count(S[i]))
				m[S[i]]++;
		
		map<char,int>::iterator it;
		for(it = m.begin(); it != m.end(); it++)
			ans += it->second ;
		
		return ans;
    }
};