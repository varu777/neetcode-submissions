class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int curr = prices[0];
        for(int i=1; i<prices.size(); i++)
        {
            if(prices[i] < curr)
            {
                curr = prices[i];
                continue;
            }
            int n = prices[i] - curr;
            res = max(res, n);
        }
        return res;
    }
};
