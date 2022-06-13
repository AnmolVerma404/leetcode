class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        int n = t.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i = n-1;i>=0;i--){
            for(int j = 0;j<=i;j++){
                dp[i][j] = min(dp[i+1][j],dp[i+1][j+1]) + t[i][j];
            }
        }
        return dp[0][0];
    }
};