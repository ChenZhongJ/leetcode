#include <iostream>
#include <string>
#include <vector>
#include <deque>

#define FOR(x, y, z) for(int x=z; x<y; x++)
#define FOR_RESERVE(x, y, z) for(int x=z; x>=y; x--)

class Solution {
public:
    std::vector<std::string> subdomainVisits(std::vector<std::string>& cpdomains) {
        std::unordered_map<std::string, int> umap;
        FOR(i, cpdomains.size(), 0) {
            std::string s = cpdomains[i];
            int pos = s.find(' ');
            umap[s.substr(pos + 1, s.length() - pos - 1)] += stoi(s.substr(0, pos));
            int st = pos + 1;
            while(s.find('.', st) != std::string::npos) {
                int p = s.find('.', st);
                umap[s.substr(p + 1, s.length() - p - 1)] += stoi(s.substr(0, pos));
                st = p + 1;
            }
        }
        
        
        std::vector<string> ans;
        for(auto m : umap)
            ans.push_back(std::to_string(m.second) + ' ' + m.first);
        return ans;
    }
};