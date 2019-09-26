#include <iostream>
#include <string>
#include <stack>
#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_R(x, y, z) for(int x=z; x>=y; x--)

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans = "";
        stack<char> s;
        if(S.length() == 0)
            return ans;
        FOR(i, S.length(), 0){
            if(S[i] == '('){
                s.push(S[0]);
                if(s.size() > 1)
                    ans += S[i];
            }else if(S[i] == ')' && s.size() > 1){
                ans += S[i];
                s.pop();
            }else if(S[i] == ')' && s.size() == 1)
                s.pop();
        }
        return ans;
    }
};