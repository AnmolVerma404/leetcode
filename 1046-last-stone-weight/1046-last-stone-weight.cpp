class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        int n = v.size();
        if(n==1) return v[0];
        priority_queue<int>pq;
        int ans = 0;
        for(auto i : v) pq.push(i);
        while(!pq.empty()){
            int top1 = pq.top();
            pq.pop();
            int top2 = pq.top();
            pq.pop();
            ans = top1 - top2;
            // cout<<ans<<" ";
            if(ans!=0) pq.push(ans);
            if(pq.size()==1){
                return pq.top();
            }
        }
        // cout<<pq.size();
        return ans;
    }
};