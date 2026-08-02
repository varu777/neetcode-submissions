class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s = heights.size();
        int l = 0;
        int r = s-1;
        int area = 0;
        while(r > l)
        {
            int a  = min(heights[l], heights[r]) * (r-l);
            if(a > area)
            {
                area = a;
            }
            if(heights[l] >= heights[r])
            {
                r--;
            }else{
                l++;
            }
        }
        return area;
    }
};
