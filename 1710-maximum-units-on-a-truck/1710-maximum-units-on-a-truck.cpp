class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int t) {
        priority_queue<pair<int,int>>pq;
        for(auto &it : b){
            pq.push({it[1],it[0]});
        }
        int res = 0;
        while(!pq.empty() && t!=0){
            auto top = pq.top();
            pq.pop();
            if(t-top.second==0) return res + top.first*top.second;
            else if(t-top.second<0){
                res+=t*top.first;
                return res;
            }
            t-=top.second;
            res+=top.first*top.second;
        }
        return res;
    }
};