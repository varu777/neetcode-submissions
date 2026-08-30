class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int l = 0;
        int r = n-k-1;
        while(l<r){
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
        l = n-k;
        r = n-1;
        while(l<r){
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
        l=0;
        r=n-1;
        while(l<r){
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }
};