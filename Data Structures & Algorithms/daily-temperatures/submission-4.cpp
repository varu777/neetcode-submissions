class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> res(n);
        for(int i=0; i<n; i++)
        {
            if(i == n-1)
            {
                res[n-1] = 0;
            }
            if(i!=n-1 && temperatures[i] < temperatures[i+1])
            {
                res[i] = 1;
            }
            while(!st.empty())
            {
                int x = st.top();
                if(temperatures[x] < temperatures[i])
                {
                    res[x] = i-x;
                    st.pop();
                    continue;
                }
                break;
            }
            st.push(i);
        }
        return res;
    }
};
