class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rs, vector<int>& cs) {
        int r = rs.size(),c = cs.size();
        vector<vector<int>>res(r,vector<int>(c));
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                res[i][j] = min(rs[i],cs[j]);
                rs[i]-=res[i][j];
                cs[j]-=res[i][j];
            }
        }
        return res;
    }
};