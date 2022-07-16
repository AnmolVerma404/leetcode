class Solution {
public:
    const int M = 1000000007;
    int func(int m, int n, int k, int i, int j,vector<vector<vector<int>>>&dp){
        if(k==0 && i>=0 && j>=0 && i<m && j<n){
            return 0;
        }
        if(i<0 || j<0 ||i>=m || j>=n){
            return 1;
        }
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        // visited[i][j] = true;
        long long int up = func(m,n,k-1,i-1,j,dp)%M;
        long long int right = func(m,n,k-1,i,j+1,dp)%M;
        long long int down = func(m,n,k-1,i+1,j,dp)%M;
        long long int left = func(m,n,k-1,i,j-1,dp)%M;
        return dp[i][j][k] = (up + right + down + left)%M;
    }
    int findPaths(int m, int n, int k, int i, int j) {
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(k+1,-1)));
        return func(m,n,k,i,j,dp)%M;
    }
};