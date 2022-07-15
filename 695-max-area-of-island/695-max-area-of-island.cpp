class Solution {
public:
    int mxArea(int r,int c,int n,int m,vector<vector<int>>& v){
        if(r<0||c<0||r>=n||c>=m||v[r][c]==0){
            return 0;
        }
        v[r][c] = 0;
        return (1+mxArea(r-1,c,n,m,v) + mxArea(r,c+1,n,m,v) +  mxArea(r+1,c,n,m,v) + mxArea(r,c-1,n,m,v));
    }
    int maxAreaOfIsland(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        int mx = 0;
        for(int i = 0;i<n;++i){
            for(int j = 0;j<m;++j){
                mx = max(mx,mxArea(i,j,n,m,v));
            }
        }
        return mx;
    }
};