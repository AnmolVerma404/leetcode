class Solution {
public:
    int rec(int i,int n,int t,vector<int>&v,vector<vector<int>>&dp){
        if(t == 0) return 1;
        if(i == 0) return v[i] == t;
        if(dp[i][t]!=-1) return dp[i][t];
        bool notTake = rec(i-1,n,t,v,dp);
        bool take = 0;
        if(t>=v[i]){
            take = rec(i-1,n,t-v[i],v,dp);
        }
        return dp[i][t] = notTake || take;
    }
    bool canPartition(vector<int>& v) {
        int n = v.size(),sum = 0;
        for(auto &it : v) sum+=it;
        if(sum%2) return false;
        int t = sum/2;
        vector<vector<int>>dp(n,vector<int>(t+1,-1));
        return rec(n-1,n,t,v,dp);
    }
};