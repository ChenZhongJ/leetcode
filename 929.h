#include <iostream>
#include <string>
#include <set>

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        set<string> s;
       	
       	for(auto e : emails){
	      	int ct = e.find('@');
			string domain = e.substr(ct),str = "";
  			for(int i=0; i<ct; i++){
				if(e[i] == '.')
					continue;
				if(e[i] == '+')
					break;
				str += e[i];	  	
			}
			s.insert(str + domain);
		}
    	return s.size();
	}
};