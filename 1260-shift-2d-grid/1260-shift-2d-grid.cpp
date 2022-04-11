class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& v, int k) {
        int m = v.size();
        int n = v[0].size();
        vector<vector<int>>res(m,vector<int>(n,0));
        for(int i = 0;i<m*n;i++){
            int y = i/n;
            int x = i%n;
            int ny = (y+(x+k)/n)%m;
            int nx = (x+k)%n;
            res[ny][nx] = v[y][x];
        }
        return res;
    }
};