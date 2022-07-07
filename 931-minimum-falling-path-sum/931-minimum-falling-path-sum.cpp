class Solution {
public:
    int solve(int i,int j,int n,vector<vector<int>>& v,vector<vector<int>>& dp){
        if(j<0 || j>=n) return 1e6;
        
        if(i == 0) return v[i][j];
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int u = v[i][j] + solve(i-1,j,n,v,dp);
        int ul = v[i][j] + solve(i-1,j-1,n,v,dp);
        int ur = v[i][j] + solve(i-1,j+1,n,v,dp);
        
        return dp[i][j] = min(u,min(ul,ur));
    }
    int minFallingPathSum(vector<vector<int>>& v) {
        int n = v.size();
        int mn = INT_MAX;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int j = 0;j<n;++j){
            int curr = solve(n-1,j,n,v,dp);
            mn = min(mn,curr);
        }
        return mn;
    }
};