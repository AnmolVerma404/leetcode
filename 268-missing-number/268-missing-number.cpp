class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n = v.size();
        
        int ans = n,mask = 0;
        
        for(int i = 0;i<n;++i){
            ans ^= v[i];
            mask ^= i;
        }
        
        return ans ^= mask;
    }
};