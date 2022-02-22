class Solution {
public:
    int minCostToMoveChips(vector<int>& v) {
        int e = 0,o = 0;
        for(int i = 0 ;i<v.size();i++){
            if(v[i]%2==0)e++;
            else o++;
        }
        if(e>o) return o;
        return e;
    }
};