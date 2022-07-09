class Solution {
public:
    int maxResult(vector<int>& v, int k) {
        int n = v.size();
        vector<int>dp(n);
        dp[0] = v[0];
        deque<int>q{0};
        for(int i = 1;i<n;++i){
            if(q.front()<i-k) q.pop_front();
            dp[i] = v[i] + dp[q.front()];
            while(!q.empty() && dp[q.back()] <= dp[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        return dp.back();
    }
};