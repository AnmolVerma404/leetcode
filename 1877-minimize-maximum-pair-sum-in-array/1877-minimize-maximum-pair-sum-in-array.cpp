class Solution {
public:
    int minPairSum(vector<int>& v) {
        sort(v.begin(),v.end());
        int n = v.size();
        int i = 0,j = n-1;
        int mx = INT_MIN;
        for(i;i<n/2;i++,j--){
            mx = max(mx,v[i] + v[j]);
        }
        return mx;
    }
};