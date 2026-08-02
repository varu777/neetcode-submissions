class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int s = nums.size();
        sort(nums.begin(), nums.end());
        int c = s/3;
        vector<int> res;
        int r = nums[0];
        int cp = 1;
        if(s<=2)
        {
            return nums;
        }
        for(int i=1; i<s; i++)
        {
            if(nums[i] == r)
            {
                cp++;
                if(i != s-1)
                {
                    continue;
                }
            }
            if(cp > c)
            {
                res.push_back(r);
            }
            r = nums[i];
            cp = 1;
        }
        return res;
    }
};