#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Base case optimization
        if (strs.empty()) return {};
        
        unordered_map<string, vector<string>> m;
        
        // Loop through and categorize each string by its sorted version
        for (int i = 0; i < strs.size(); i++) {
            string sub = strs[i];
            sort(sub.begin(), sub.end());
            m[sub].push_back(strs[i]); // Directly push the original string
        }
        
        vector<vector<string>> res;
        res.reserve(m.size()); // Optimization: pre-allocate memory
        
        // Extract grouped anagrams into the final result vector
        for (const auto& [key, group] : m) {
            res.push_back(group); // Directly push the inner vector
        }
        
        return res;
    }
};
