class Solution {
public:
    int func(int i,int j1,int j2,int n,int m,vector<vector<int>>& g,vector<vector<vector<int>>>&dp){
        if(j1<0 || j1>=m || j2<0 || j2>=m) return -1e7;
        
        if(i == n-1){
            if(j1 == j2) return g[i][j1];
            else return g[i][j1] + g[i][j2];
        }
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int mx = -1e7;
        for(int d1 = -1;d1<=1;++d1){
            for(int d2 = -1;d2<=1;++d2){
                int val = 0;
                if(j1 == j2){
                    val = g[i][j1];
                }else{
                    val = g[i][j1] + g[i][j2];
                    
                }
                val+=func(i+1,j1+d1,j2+d2,n,m,g,dp);
                mx = max(mx,val);
            }
        }
        return dp[i][j1][j2] =  mx;
    }
    int cherryPickup(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        
        return func(0,0,m-1,n,m,g,dp);
    }
};