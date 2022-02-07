class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int n = v.size();
        for(int i = 0;i<n;i++){
            int l = i+1, h = n-1;
            while(l<=h){
                int m = l + (h-l)/2;
                if(v[m]==t-v[i]) return {i+1,m+1};
                else if(v[m] < t - v[i]) l = m +1;
                else h = m - 1;
            }
            if(l!=n && v[l] == t-v[i]) return {i+1,v[l]};
        }
        return {};
    }
};