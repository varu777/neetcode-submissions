class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int s = nums.size();
        unordered_map<int, int> um;
        for(int i=0; i<s; i++)
        {
            if(um.contains(nums[i]))
            {
                um[nums[i]]++;
            }else{
                um.insert({nums[i], 1});
            }
        }
        int c = s/3;
        vector<int> res;
        for(auto i = um.begin(); i!=um.end(); i++)
        {
            if(i->second > c)
            {
                res.push_back(i->first);
            }
        }
        return res;
    }
};