class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        if(v.size()==1) return v[0];
        priority_queue<int>pq;
        for(auto i : v) pq.push(i);
        int res = 0;
        while(!pq.empty()){
            int t1 = pq.top();
            pq.pop();
            // if(pq.size()==1) return pq.top();
            int t2 = pq.top();
            pq.pop();
            int d = t1-t2;
            if(d!=0) pq.push(d);
            if(pq.size()==1) return pq.top();
        }
        return res;
    }
};