class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& v) {
        priority_queue<pair<int,int>>pq;
        int n = v.size();
        for(int i = 0;i<n;i++){
            pq.push({v[i],i});
        }
        int i = 0;
        vector<string>res(n);
        while(!pq.empty()){
            res[pq.top().second]=i==0?"Gold Medal":i==1?"Silver Medal":i==2?"Bronze Medal":to_string(i+1);
            i++;
            pq.pop();
        }
        return res;
    }
};