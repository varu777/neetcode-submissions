class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l=0;
        int r = 0;
        unordered_set<char> st;
        int res = 0;
        for(;r<n;r++)
        {
            char x = s[r];
            if(st.contains(x))
            {
                res = max(res, r-l);
                while(st.contains(s[r]))
                {
                    st.erase(s[l]);
                    l++;
                }
            }
            st.insert(s[r]);
        }
        int m = st.size();
        res = max(res, m);
        return res;
    } 
};
