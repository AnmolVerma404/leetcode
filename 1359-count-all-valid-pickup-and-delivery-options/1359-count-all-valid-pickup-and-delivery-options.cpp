const int M =  1e9 + 7;
class Solution {
public:
    int countOrders(int n) {
        vector<long long>dp(501);
        dp[1] = 1;
        dp[2] = 6;
        for(int i = 3;i<=n;i++){
            long long num = 2*i-1;
            long long permutations = num * (num+1)/2;
            dp[i] = (dp[i-1]*(permutations))%M;
        }
        return dp[n];
    }
};