class Solution {
public:
    int rob(vector<int>& v) {
        int n = v.size();
        int prev2 = 0;
        int prev1 = v[0];
        for(int i = 1;i<n;++i){
            int curr = max(v[i] + prev2,prev1);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};