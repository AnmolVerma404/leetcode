class Solution {
public:
    int func(int m,int n,vector<vector<int>>&g,vector<vector<int>>&dp){
        if(m == 0 && n == 0) return g[m][n];
        if(m<0 || n<0) return 1e6;
        if(dp[m][n] != -1) return dp[m][n];
        int left = func(m,n-1,g,dp) + g[m][n];
        int up = func(m-1,n,g,dp) + g[m][n];
        return dp[m][n] = min(left,up);
    }
    int minPathSum(vector<vector<int>>& g) {
        int m = g.size();
        int n = g[0].size();
        
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        return func(m-1,n-1,g,dp);
    }
};