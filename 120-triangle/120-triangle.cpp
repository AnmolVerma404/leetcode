class Solution {
public:
    int func(int i,int j,int n,vector<vector<int>>&v,vector<vector<int>>&dp){
        if(i == n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int left = v[i][j] + func(i+1,j,n,v,dp);
        int right = v[i][j] + func(i+1,j+1,n,v,dp);
        return dp[i][j] = min(left,right);
    }
    int minimumTotal(vector<vector<int>>& t) {
        int n = t.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return func(0,0,n,t,dp);
    }
};