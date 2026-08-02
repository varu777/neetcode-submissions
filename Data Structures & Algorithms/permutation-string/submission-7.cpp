class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp;
        for(int i=0; i<s1.size(); i++)
        {
            mp[s1[i]]++;
        }
        int r =0;
        int l = 0;
        int req = mp.size();
        int f = 0;
        while(r < s2.size())
        {
            char key = s2[r];
            if(mp.contains(key))
            {
                mp[key]--;
                if(mp[key] == 0)
                {
                    f++;
                }
            }
            if(r-l+1 > s1.size())
            {
                char lkey = s2[l];
                if(mp.contains(lkey))
                {
                    if(mp[lkey] == 0)
                    {
                        f--;
                    }
                    mp[lkey]++;
                }
                l++;
            }
            if(f == req)
            {
                return true;
            }
            r++;
        }
        return false;
    }
};
