class Solution {
public:
    int findKthPositive(vector<int>& v, int k) {
        for(auto i : v) {
            if(i<=k)k++;
            else break;
        }
        return k;
    }
};