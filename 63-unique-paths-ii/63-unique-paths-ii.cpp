class Solution {
public:
    int func(int m,int n,vector<vector<int>>& o,vector<vector<int>>& dp){
        if(m == 0 && n == 0) return 1;
        if(m<0 || n<0) return 0;
        if(o[m][n] == 1) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int left = func(m,n-1,o,dp);
        int up = func(m-1,n,o,dp);
        return dp[m][n] = left + up;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m = o.size();
        int n = o[0].size();
        if(o[0][0] == 1) return 0;
        if(o[m-1][n-1] == 1) return 0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return func(m-1,n-1,o,dp);
    }
};