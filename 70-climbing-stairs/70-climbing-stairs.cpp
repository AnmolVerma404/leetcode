class Solution {
public:
    int func(int n,vector<int>&dp){
        if(n == 0){
            return dp[n] = 1;
        }
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = func(n-1,dp) + func(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return func(n,dp);
    }
};