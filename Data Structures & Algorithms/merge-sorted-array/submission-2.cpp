class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l  = m-1;
        int r = n-1;
        int i = m+n-1;
        while(l>=0 && r>=0){
            if(nums1[l] > nums2[r]){
                swap(nums1[i], nums1[l]);
                l--;
                i--;
            }
            else if(nums1[l] < nums2[r]){
                nums1[i] = nums2[r];
                r--;
                i--;
            }else{
                swap(nums1[i], nums1[l]);
                i--;
                l--;
                nums1[i] = nums2[r];
                i--;
                r--;
            }
        }
        if(r>=0){
            while(r>=0){
                nums1[i] = nums2[r];
                i--;
                r--;
            }
        }
    }
};