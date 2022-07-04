class Solution {
public:
    int candy(vector<int>& r) {
        int n = r.size();
        if(n == 1) return 1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i = 0;i<n;++i) pq.push({r[i],i});
        vector<int>c(n,1);
        while(!pq.empty()){
            int rank = pq.top().first;
            int i = pq.top().second;
            pq.pop();
            
            if(i-1>=0 && r[i-1]<r[i]){
                c[i] = c[i-1] + 1;
            }
            if(i+1<n && r[i+1]<r[i]){
                if(c[i]<=c[i+1]){
                    c[i] = c[i+1] + 1;                    
                }
            }
        }
        int sum = 0;
        for(auto &it : c)sum+=it;
        return sum;
    }
};