#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    int calPoints(std::vector<std::string>& ops) {
		int ans, n;
		ans = n = 0;
        std::vector<int> v;
        for (auto str : ops) {
            if (str == "C") {
                ans -= v.back();
                v.pop_back();
                continue;
            }else if (str == "D") {
                n = v.back() * 2;
                ans += n;
            }else if (str == "+") {
                n = v[v.size() - 1] + v[v.size() - 2];
                ans += n;
            }else {
                n = std::stoi(str);
                ans += n;
            }
            v.push_back(n);
        }
        return ans;
    }
};