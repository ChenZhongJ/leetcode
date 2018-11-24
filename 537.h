#include <iostream>
#include <string>
#include <vector>

#define FOR(x, y) for(int x=0; x<y; x++)

class Solution {
public:
    std::string complexNumberMultiply(std::string a, std::string b) {
    	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
		int flag = 0, ct = 1;
		FOR(i, a.size()){
			if(!flag)
				if(a[i] == '-')
					ct = -1;
				else if(a[i] == '+'){
					flag = 1;
					x1 *= ct;
					ct = 1;
				}else
					x1 = x1 * 10 + (a[i] - '0');	
			else{
				if(a[i] == '-')
					ct = -1;
				else if(a[i] == 'i')
					y1 *= ct;
				else
					y1 = y1 * 10 + (a[i] - '0');
			}		
		} 
		
		flag = 0, ct = 1;
		
		FOR(i, b.size()){
			if(!flag)
				if(b[i] == '-')
					ct = -1;
				else if(b[i] == '+'){
					flag = 1;
					x2 *= ct;
					ct = 1;
				}else
					x2 = x2 * 10 + (b[i] - '0');	
			else{
				if(b[i] == '-')
					ct = -1;
				else if(b[i] == 'i')
					y2 *= ct;
				else
					y2 = y2 * 10 + (b[i] - '0');
			}		
		}  
	
		int x = x1*x2 - y1*y2, y = x1*y2 + x2*y1;
		
		std::string str = "";
	
		if(x < 0){
			str += "-";
			x = -x;
		}
		
		str += std::to_string(x);
		str += "+";
		if(y < 0){
			str += "-";
			y = -y;	
		}
		str += std::to_string(y);
		str += "i";

		return str;
    }
};