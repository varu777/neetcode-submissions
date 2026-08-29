class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        priority_queue<pair<int,char>> maxq;
        unordered_map<char,int> mp;
        for(char c : s){
            mp[c]++;
        }
        for(const auto& [k,v] : mp){
            maxq.push({v,k});
        }
        string res;
        pair<int,char> prev = {0,'*'};
        while(!maxq.empty()){
            pair<int,char> curr = maxq.top();
            maxq.pop();
            int m = curr.first -1;
            char z = curr.second;
            res.push_back(z);
            if(prev.second != '*'){
                maxq.push(prev);
            }
            if(m!=0){
            prev = {m,z};
            }else{
                prev = {0,'*'};
            }
        }
        if(res.size()!=n){
            return "";
        }
        return res;
    }
};