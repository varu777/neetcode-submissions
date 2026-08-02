class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int e = -1;
        int p = 0;
        int c = -1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] < 0)
            {
                continue;
            }
            if(nums[i] > 1 && p==0)
            {
                return 1;
            }
            if(nums[i] >= 0 && p==0)
            {
                e = nums[i];
                p++;
                continue;
            }
            if(nums[i] > 0)
            {
                if(e == nums[i] - 1 || e==nums[i])
                {
                    e = nums[i];
                    continue;
                }else{
                    c = i-1;
                    break;
                }
            }
        }
        if(c==-1)
        {
            if(p==0)
            {
                return 1;
            }
            return nums[nums.size() - 1] + 1;
        }
        return nums[c] + 1;
    }
};