class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int s = nums.size();
        int r = -1 * (s+1);
        for(int i=0; i<s; i++)
        {
            if(nums[i] < 0)
            {
                nums[i] = 0;
            }
        }
        for(int j=0; j<s; j++)
        {
            int x = nums[j];
            int ind = abs(x) - 1;
            if(ind<0 || ind>=s)
            {
                continue;
            }
            if(nums[ind] < 0)
            {
                continue;
            }
            if(nums[ind] == 0)
            {
                nums[ind] = r;
            }else{
                nums[ind] = -1 * nums[ind];
            }
        }
        for(int m = 1; m<=s; m++)
        {
            if(nums[m-1] < 0)
            {
                if(m==s)
                {
                    return m+1;
                }
                continue;
            }
            return m;
        }
    }
};