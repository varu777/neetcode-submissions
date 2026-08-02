class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int s = people.size();
        sort(people.begin(), people.end());
        int l = 0;
        int r = s-1;
        int res = 0;
        while(people[r] == limit)
        {
            res++;
            r--;
        }
        while(r>=l)
        {
            if(r == l)
            {
                res++;
                break;
            }
            if(people[r] + people[l] <= limit)
            {
                res++;
                l++;
                r--;
            }else{
                res++;
                r--;
            }
        }
        return res;
    }
};