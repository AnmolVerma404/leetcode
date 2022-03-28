class Solution {
public:
    bool search(vector<int>& v, int t) {
        int p = 0,n = v.size();
        for(int i = 0;i<n;i++){
            if(v[i] == t) return true;
        }
        return false;
    }
};