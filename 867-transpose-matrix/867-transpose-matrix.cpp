class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& v) {
        vector<vector<int>>res(v[0].size(),vector<int>(v.size(),0));
        for(int i = 0;i<v[0].size();i++){
            for(int j = 0;j<v.size();j++){
                res[i][j] = v[j][i];
            }
        }
        return res;
    }
};