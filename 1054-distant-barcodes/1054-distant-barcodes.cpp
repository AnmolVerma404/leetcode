class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& v) {
        if(v.size()==0||v.size()==1) return v;
        vector<int>res;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(auto i : v) mp[i]++;
        for(auto i : mp) pq.push({i.second,i.first});
        while(pq.top().first>0){
            auto top1 = pq.top();
            top1.first--;
            pq.pop();
            res.push_back(top1.second);
            auto top2 = pq.top();
            pq.pop();
            if(top2.first>0){
                top2.first--;
                res.push_back(top2.second);
            }
            pq.push(top1);
            pq.push(top2);
        }
        return res;
    }
};