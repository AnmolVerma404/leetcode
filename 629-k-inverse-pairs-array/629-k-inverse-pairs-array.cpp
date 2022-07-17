class Solution {
public:
    const int M = 1e9 + 7;
    int kInversePairs(int n, int k) {
        vector<int>dp(k+1,0);
        for(int i = 1;i<=n;++i){
            vector<int>temp(k+1,0);
            temp[0] = 1;
            for(int j = 1;j<=k;++j){
                long long int val = (dp[j]+M - ((j-i)>=0?dp[j-i]:0))%M;
                temp[j] = (temp[j-1] + val)%M;
            }
            dp = temp;
        }
        return (dp[k]+M-(k>0?dp[k-1]:0))%M;
    }
};