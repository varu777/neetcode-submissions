class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> res;
        int l,r =0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] == x)
            {
                l = i;
                r = i+1;
                break;
            }
            if(i!=n-1 && arr[i] < x && arr[i+1] > x)
            {
                l = i;
                r = i+1;
                break;
            }
            if(i ==0 && arr[i] > x)
            {
                l = -1;
                r=i;
                break;
            }
            if(i==n-1 && arr[i] < x)
            {
                l=n-1;
                r=n;
                break;
            }
        }
        if(l == -1)
        {
            while(k>0)
            {
                res.push_back(arr[r]);
                r++;
                k--;
            }
            return res;
        }
        if(r == n)
        {
            int c = l-k+1;
            while(k>0)
            {
                res.push_back(arr[c]);
                c++;
                k--;
            }
            return res;
        }
        int v = l;
        while(l>=0 && r<=n-1)
        {
            cout<<x;
            if(k == 0)
            {
                sort(res.begin(), res.end());
                return res;
            }
            int c1 = abs(arr[l] - x);
            int c2 = abs(arr[r] - x);
            cout<<c1;
            cout<<c2;
            if(c1 < c2)
            {
                res.push_back(arr[l]);
                l--;
                k--;
                cout<<l;
                cout<<r;
                cout<<k;
            }
            else if(c1> c2)
            {
                res.push_back(arr[r]);
                r++;
                k--;
            }else{
                res.push_back(arr[l]);
                l--;
                k--;
            }
        }
        if(k>0)
        {
            while(k>0)
            {
                if(l>0)
                {
                    res.push_back(arr[l]);
                    l--;
                    k--;
                    continue;
                }
                if(r<n)
                {
                    res.push_back(arr[r]);
                    r++;
                    k--;
                    continue;
                }
            }
        }
        sort(res.begin(), res.end());
        return res;















































































































































































































































































































































































































































































































































    }
};