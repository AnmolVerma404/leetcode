class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>>dp(101,vector<double>(101));
        dp[0][0] = poured;
        for(int i = 0;i<100;i++){
            for(int j = 0;j<=i;j++){
                if(dp[i][j]>1){
                    /*
                        5 -> poured -> after balancing 1
                    1        1
               0.5    1    1   0.5
                    */
                    //This will be balanced, as the first and the last cup in the row will be filled half than other.
                    dp[i+1][j]+=(dp[i][j]-1)/2.0;
                    dp[i+1][j+1]+=(dp[i][j]-1)/2.0;
                    dp[i][j] = 1;
                }
            }
        }
        return dp[query_row][query_glass];
    }
};