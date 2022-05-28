class Solution {
public:
    int missingNumber(vector<int>& v) {
        sort(v.begin(),v.end());
        int i = 0;
        for(i = 0;i<v.size();i++) if(i!=v[i]) return i;
        return i;
    }
};