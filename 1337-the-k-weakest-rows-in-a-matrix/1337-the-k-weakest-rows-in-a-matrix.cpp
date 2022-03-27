class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& m, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int r = m.size();
        int c = m[0].size();
        for(int i = 0;i<r;i++){
            int t = 0;
            for(int j = 0;j<c;j++){
                if(m[i][j]==1)t++;
            }
            cout<<t<<" ";
            pq.push({t,i});
        }
        vector<int>res;
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};