class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int i = 0;
        while(i <= r)
        {
            if(nums[i] == 0)
            {
                swap(nums[l], nums[i]);
                l++;
                i++;
                continue;
            }
            if(nums[i] == 1)
            {
                i++;
                continue;
            }
            if(nums[i] == 2)
            {
                swap(nums[i], nums[r]);
                r--;
            }
        }
    }
};