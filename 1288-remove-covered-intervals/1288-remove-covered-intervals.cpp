class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        int x = v[0][0],y = v[0][1];
        int res = 1;
        for(int i = 1;i<v.size();i++){
            if(v[i][0]>x && v[i][1]>y) res++;
            if(v[i][1]>y){
                x = v[i][0];
                y = v[i][1];
            }
        }
        return res;
    }
};