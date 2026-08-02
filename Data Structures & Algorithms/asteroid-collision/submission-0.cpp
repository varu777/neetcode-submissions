class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        vector<int> res;
        for(int i=0; i<n; i++)
        {
            int x = asteroids[i];
            if(x < 0)
            {
                if(st.empty())
                {
                    res.push_back(x);
                    continue;
                }
                int p = st.top();
                if(abs(x) == p)
                {
                    st.pop();
                    continue;
                }
                if(abs(x)<p)
                {
                    continue;
                }
                bool d = false;
                while(abs(x)>p)
                {
                    st.pop();
                    if(!st.empty())
                    {
                        int m = st.top();
                        p = m;
                        if(p == abs(x))
                        {
                            st.pop();
                            d= true;
                            break;
                        }
                    }
                    else{
                        break;
                    }
                }
                if(st.empty() && !d)
                {
                    res.push_back(x);
                    continue;
                }
            }
            else
            {
                st.push(x);
            }
        }
        vector<int> im;
        while(!st.empty())
        {
            int v = st.top();
            im.push_back(v);
            st.pop();
        }
        int k = im.size();
        for(int j=k-1; j>=0; j--)
        {
            res.push_back(im[j]);
        }
        return res;
    }
};