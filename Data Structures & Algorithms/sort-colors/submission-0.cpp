class Solution {
public:
    void sortColors(vector<int>& nums) {
        int rc = 0;
        int wc = 0;
        int bc = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) //o(n)
        {
            if(nums[i] == 0)
            {
                rc++;
            }else if(nums[i] == 1)
            {
                wc++;
            }
            else{
                bc++;
            }
        }
        nums.clear();
        while(rc > 0)
        {
            nums.push_back(0);
            rc--;
        }
        while(wc > 0)
        {
            nums.push_back(1);
            wc--;
        }
        while(bc > 0)
        {
            nums.push_back(2);
            bc--;
        }
    }
};