class Solution {
public:
    int func(int i,int n,vector<int>& v,vector<int>& dp){
        if(i <= 1) return v[i];
        if(dp[i]!=-1) return dp[i];
        int one = v[i] + func(i-1,n,v,dp);
        int two = v[i] + func(i-2,n,v,dp);
        return dp[i] = min(one,two);
    }
    int minCostClimbingStairs(vector<int>& v) {
        int n = v.size();
        int prev2 = v[0];
        int prev1 = v[1];
        for(int i = 2;i<n;++i){
            int curr = min(prev2,prev1) + v[i];
            prev2 = prev1;
            prev1 = curr;
        }
        return min(prev1,prev2);
    }
};