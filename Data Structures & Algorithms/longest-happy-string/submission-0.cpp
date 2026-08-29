class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> maxq;
        if(a>0){
            maxq.push({a,'a'});
        }
        if(b>0){
          maxq.push({b,'b'});
        }
        if(c>0){
            maxq.push({c,'c'});
        }
        char prev = '@';
        int cc = 0;
        pair<int,char> toinsert = {0,'*'};
        string res = "";
        while(!maxq.empty()){
           pair<int,char> x = maxq.top();
           maxq.pop();
           int remcount = x.first-1;
           char z = x.second;
           if(prev == z){
            cc++;
           }
           else{
            cc=1;
           }
           
           if(cc==2){
            prev = z;
            res.push_back(z);
            if(remcount!=0){
            toinsert = {remcount, z};
            }
           }
           else{
            prev = z;
            res.push_back(z);
            if(remcount!=0){
            maxq.push({remcount,z});
            }
            if(toinsert.second!='*'){
                maxq.push(toinsert);
                toinsert = {0,'*'};
            }
           }
        }
        return res;
    }
};