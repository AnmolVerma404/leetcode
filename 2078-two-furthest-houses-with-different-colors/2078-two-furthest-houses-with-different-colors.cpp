class Solution {
public:
    int maxDistance(vector<int>& v) {
        int n = v.size(), i = 0,j = n-1;
        while(v[0]==v[j]) j--;
        while(v[n-1]==v[i]) i++;
        return max(j,n-i-1);
    }
};