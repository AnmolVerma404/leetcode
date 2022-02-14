class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& v, int k) {
        priority_queue<pair<double,int>,vector<pair<double,int>>,greater<pair<double,int>>>pq;
        for(int i = 0;i<v.size();i++){
            pq.push({sqrt(pow(v[i][0],2)+pow(v[i][1],2)),i});
        }
        // while(!pq.empty()){
        //     cout<<pq.top().first<<" "<<pq.top().second<<"\n";
        //     pq.pop();
        // }
        vector<vector<int>>res;
        while(k--){
         res.push_back({v[pq.top().second][0],v[pq.top().second][1]});
            pq.pop();
        }
        
        return res;
        
    }
};