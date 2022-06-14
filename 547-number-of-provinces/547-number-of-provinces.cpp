class Solution {
public:
    int n = 0;
    void dfs(vector<vector<int>>&g,vector<bool>&visited,int i){
        visited[i] = true;
        for(int j = 0;j<n;j++){
            if(g[i][j] == 1 && !visited[j]){
                dfs(g,visited,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& g) {
        n = g.size();
        vector<bool>visited(n,false);
        int res = 0;
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                res++;
                dfs(g,visited,i);
            }
        }
        return res;
    }
};