class Solution {
public:
    void buildGraph(vector<vector<int>>&g,vector<vector<int>>&c){
        for(int i = 0;i<c.size();i++){
            g[c[i][0]].push_back(c[i][1]);
            g[c[i][1]].push_back(c[i][0]);
        }
    }
    void dfs(vector<vector<int>>&g,vector<bool>&visited,int i){
        visited[i] = true;
        for(auto j : g[i]){
            if(!visited[j]){
                dfs(g,visited,j);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& c) {
        if(n>c.size()+1) return -1;
        vector<vector<int>>g(n);
        buildGraph(g,c);
        vector<bool>visited(n,false);
        int res = 0;
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                res++;
                dfs(g,visited,i);
            }
        }
        return res -1;
    }
};