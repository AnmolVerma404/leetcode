class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& v) {
        int n = v.size(),res = 0;
        if(n == 0 || n == 1 || n == 2) return 0;
        vector<int>dp(n);
        for(int i = 2;i<n;i++){
            if(v[i]-v[i-1]==v[i-1]-v[i-2]){
                dp[i] = 1 + dp[i-1];
                res+=dp[i];
            }
        }
        return res;
    }
};