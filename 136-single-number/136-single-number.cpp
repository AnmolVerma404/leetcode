class Solution {
public:
    int singleNumber(vector<int>& v) {
        int n = v.size();
        int ans = 0;
        for(auto &it : v) ans ^= it;
        return ans;
    }
};