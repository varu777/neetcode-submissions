class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int curr = nums[0];
        int k=1;
        for(int j=1; j<nums.size(); j++){
            if(nums[j] == curr){
                continue;
            }
            curr = nums[j];
            swap(nums[i+1], nums[j]);
            i++;
            k++;
        }
        return k;
    }
};