class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l=0;
        int r = 0;
        int cws = nums[0];
        int res = INT_MAX;
        while(r<n)
        {
            int ws = r-l+1;
            if(cws == target)
            {
                res = min(res, ws);
                cws = cws - nums[l];
                l++;
                r++;
                cws = cws + nums[r];
                continue;
            }
            if(cws > target)
            {
                res = min(res, ws);
                cws = cws - nums[l];
                l++;
                continue;
            }
            if(cws < target)
            {
                r++;
                if(r == n)
                {
                    break;
                }
                cws = cws + nums[r];
                continue;
            }
        }
        if(res == INT_MAX)
        {
            return 0;
        }
        return res;
    }
};