class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>> mq;
        for(int i=0; i<points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];
            int d = x*x + y*y;
            cout<<x;
            cout<<y;
            mq.push({d, i});
            if(mq.size() > k) mq.pop();
        }
        vector<vector<int>> res;
        while(!mq.empty()){
            pair<int,int> x = mq.top();
            mq.pop();
            int i = x.second;
            
            res.push_back({points[i][0], points[i][1]});
        }
        return res;
    }
};
