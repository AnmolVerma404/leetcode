class Solution {
public:
    int kthSmallest(vector<vector<int>>& v, int k) {
        priority_queue <int, vector<int>, greater<int>>pq;
        int n = v.size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                pq.push(v[i][j]);
            }
        }
        int i =1;
        while(!pq.empty()){
            // cout<<pq.top()<<" ";
            if(i++==k)return pq.top();
            pq.pop();
            // i++;
        }
        return 1;
    }
};