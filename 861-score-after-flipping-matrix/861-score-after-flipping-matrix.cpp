class Solution {
public:
    int matrixScore(vector<vector<int>>& v) {
        int r = v.size();
        int c = v[0].size();
        for(int i = 0;i<r;i++){
            if(v[i][0]==0){
                for(int j = 0;j<c;j++){
                    v[i][j] = 1 - v[i][j];
                }
            }
        }
        for(int j = 0;j<c;j++){
            int cz = 0,co = 0;
            for(int i = 0;i<r;i++){
                if(v[i][j]==0)cz++;
                else co++;
            }
            if(cz>co){
                for(int i = 0;i<r;i++){
                    v[i][j] = 1 - v[i][ j];
                }
            }
        }
        int res = 0;
        for(int i = 0;i<r;i++){
            int p = 0;
            for(int j = c-1;j>=0;j--){
                res+=v[i][j]*(1<<p);
                p++;
            }
        }
        return res;
    }
};