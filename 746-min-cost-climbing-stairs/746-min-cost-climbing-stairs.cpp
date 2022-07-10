class Solution {
public:
    int func(int i,int n,vector<int>& v,vector<int>& dp){
        if(i <= 1) return v[i];
        if(dp[i]!=-1) return dp[i];
        int one = v[i] + func(i-1,n,v,dp);
        int two = v[i] + func(i-2,n,v,dp);
        return dp[i] = min(one,two);
    }
    int minCostClimbingStairs(vector<int>& v) {
        v.push_back(0);
        int n = v.size();
        vector<int>dp(n,-1);
        return func(n-1,n,v,dp);
    }
};