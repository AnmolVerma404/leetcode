class Solution {
public:
    vector<int> findClosestElements(vector<int>& v, int k, int x) {
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto i : v){
          pq.push({abs(i-x),i});
        }
        priority_queue<int,vector<int>,greater<int>>pqf;
        while(k--){
            // cout<<pq.top().first<<" "<<pq.top().second<<"\n";
            pqf.push(pq.top().second);
            pq.pop();
        }
        vector<int>res;
        while(!pqf.empty()){
            // cout<<pqf.top()<<" ";
            res.push_back(pqf.top());
            pqf.pop();
        }
        return res;
    }
};