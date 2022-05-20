class Solution {
public:
    vector<vector<int>>dp;
    int n,m;
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        n = o.size(),m = o[0].size();
        dp.resize(n,vector<int>(m));
        return solve(o,0,0);
    }
    int solve(vector<vector<int>> &v,int i ,int j){
        if(i<0 || j<0 || i>=n || j >= m) return 0;
        if(v[i][j]) return dp[i][j]=0;
        if(i == n-1 && j == m-1 ) return 1;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j] = solve(v,i+1,j) + solve(v,i,j+1);
    }
};