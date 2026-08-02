class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int> s;
        for(int i=0; i<n; i++)
        {
            s.insert(nums[i]);
        }
        int res = 1;
        for(int j=0; j<n; j++)
        {
            int c = 0;
            if(s.contains(nums[j] - 1))
            {
                continue;
            }
            int k = nums[j];
            while(s.contains(k))
            {
                c++;
                k +=1;
            }
            res = max(c, res);
        }
        return res;
    }
};
