#include <iostream>
#include <string>
#include <stack>
#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_R(x, y, z) for(int x=z; x>=y; x--)

using namespace std;

class Solution {
public:

    int vis[26];

    int numTilePossibilities(string t) {
        
        memset(vis, 0, sizeof(vis));
        FOR(i, t.length(), 0)
            vis[t[i] - 'A']++;
        
        return dfs();
    }

    int dfs(){

        int ct = 0;
        FOR(i, 26, 0){
            if(vis[i] == 0)
                continue;
            ct++;
            vis[i]--;

            ct += dfs();
            ++vis[i];
        }

        return ct;
    }
};