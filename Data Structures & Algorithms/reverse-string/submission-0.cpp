class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int l = 0;
        int r = size-1;
        while(r>l)
        {
            swap(s[l], s[r]);
            r--;
            l++;
        }
        return;
    }
};