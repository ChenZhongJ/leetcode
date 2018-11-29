#include <iostream>
#include <string>
#include <vector>
#include "557.h"

#define FOR(x, y) for(int x=0; x<y; x++)

int main(){
	
	std::vector<std::vector<int> > mx;
	std::vector<int> m;
	int n;
	//FOR(i, 3){
		//FOR(j, 4){
			//std::cin >> n;
			//m.push_back(n);
		//}
		//mx.push_back(m);
		//m.clear();	
	//}

	
	Solution s;
	//s.spiralMatrixIII(5, 6, 1, 3);
	std::cout << s.reverseWords("Let's take LeetCode contest") << std::endl;
	
	return 0;
}