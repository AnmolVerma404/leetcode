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
        dp[0][0] = g[0][0];
        for(int i = 0;i<m;++i){
            for(int j = 0;j<n;++j){
                if(i == 0 && j == 0) continue;
                int left = 1e6, up = 1e6;
                if(j-1>=0) left = dp[i][j-1] + g[i][j];
                if(i-1>=0) up = dp[i-1][j] + g[i][j];
                dp[i][j] = min(left,up);
            }
        }
        return dp[m-1][n-1];
    }
};