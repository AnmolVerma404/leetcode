class Solution {
public:
    int dp[10010];
    int solve(vector<int> &c, int a){
        if(a == 0) return 0;
        if(dp[a]!=-1) return dp[a];
        int ans = INT_MAX;
        for(auto i : c){
            if(a-i>=0){
                ans = min(ans + 0LL,solve(c,a-i)+1LL);
            }
        }
        return dp[a] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));        
        int ans = solve(coins,amount);
        return ans == INT_MAX ? -1 : ans;
    }
};