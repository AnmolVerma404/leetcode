class Solution {
public:
    int res = 0,n = 0,m = 0;
    void dfs(vector<vector<char>>&g,vector<vector<bool>>&visited,int i,int j){
        visited[i][j] = true;
         if(i-1>=0 && visited[i-1][j] == false && g[i-1][j] == '1'){
            dfs(g,visited,i-1,j);
        }
        if(i+1<n && visited[i+1][j] == false && g[i+1][j] == '1'){
            dfs(g,visited,i+1,j);
        }
		if(j-1>=0 && visited[i][j-1] == false && g[i][j-1] == '1'){
            dfs(g,visited,i,j-1);
        }
        if(j+1<m && visited[i][j+1] == false && g[i][j+1] == '1'){
            dfs(g,visited,i,j+1);
        }
    }
    int numIslands(vector<vector<char>>& g) {
        n = g.size();
        m = g[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(visited[i][j]==false && g[i][j] == '1'){
                    dfs(g,visited,i,j);
                    res++;
                }
            }
        }
        return res;
    }
};