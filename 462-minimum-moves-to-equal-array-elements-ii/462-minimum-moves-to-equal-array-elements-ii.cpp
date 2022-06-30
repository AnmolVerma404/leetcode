class Solution {
public:
    int minMoves2(vector<int>& v) {
        sort(v.begin(),v.end());
        int n = v.size();
        int m = v[n/2];
        int res = 0;
        for(int i = 0;i<n;i++){
            res += abs(v[i] - m);
        }
        return res;
    }
};