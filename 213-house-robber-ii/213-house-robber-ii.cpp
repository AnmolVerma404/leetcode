class Solution {
public:
    int solve(vector<int>&v,int i,int j){
        int prev2 = 0;
        int prev1 = v[i];
        for(int k = i+1;k<j;++k){
            int curr = max(v[k] + prev2,prev1);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
    int rob(vector<int>& v) {
        int n = v.size();
        if(n == 1) return v[0];
        int res1 = solve(v,0,n-1);
        int res2 = solve(v,1,n);
        return max(res1,res2);
    }
};