class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> st;
        int a = s1.length();
        int b = s2.length();
        int l = 0;
        int r = 0;
        int f = 0;
        for(int i=0; i<a; i++)
        {
            st[s1[i]]++;
        }
        while(r<b)
        {
            char key = s2[r];
            if(st.contains(key) && st[key] > 0)
            {
                st[key]--;
                if(st[key] == 0)
                {
                    st.erase(key);
                }
                f=1;
                r++;
                if(st.empty())
                {
                    return true;
                }
            }else{
                if(f == 1)
                {
                    st.clear();
                    for(int i=0; i<a; i++)
                    {
                        st[s1[i]]++;
                    }
                }
                l++;
                r = l;
                f= 0;
            }
        }
        return false;
    }
};
