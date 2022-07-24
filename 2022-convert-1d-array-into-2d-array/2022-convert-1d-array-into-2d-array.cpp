class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& v, int m, int n) {
        vector<vector<int>>res(m,vector<int>(n,0));
        int s = v.size();
        // cout<<s<<"\n";
        if(m*n!=s) return {};
        // if(m == 1 && n<s) return {};
        // if(m*n<s) return {};
        int k = 0;
        for(int i = 0;i<m;++i){
            for(int j = 0;j<n;++j){
                if(k>=s) return res;
                res[i][j] = v[k++];
            }
        }
        return res;
    }
};