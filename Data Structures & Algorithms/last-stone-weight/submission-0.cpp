class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> mq;
        if(stones.size() == 1)
        {
            return stones[0];
        }
        for(int i : stones){
            mq.push(i);
        }
        while(mq.size()>1){
            int x = mq.top();
            mq.pop();
            int y = mq.top();
            mq.pop();
            if(x==y) continue;
            x > y ? mq.push(x-y) : mq.push(y-x);
        }
        if(mq.size() == 1)
        {
            return mq.top();
        }
        return 0;
    }
};
