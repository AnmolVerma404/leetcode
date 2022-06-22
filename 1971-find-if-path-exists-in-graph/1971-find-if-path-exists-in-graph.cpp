class Solution {
public:
    void buildGraph(vector<vector<int>>& g,vector<vector<int>>& e){
        for(int i = 0;i<e.size();i++){
            g[e[i][0]].push_back(e[i][1]);
            g[e[i][1]].push_back(e[i][0]);
        }
    }
    void dfs(vector<vector<int>>& g,vector<bool>&visited,int i){
        visited[i] = true;
        for(auto j : g[i]){
            if(!visited[j]){
                dfs(g,visited,j);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& e, int s, int d) {
        vector<vector<int>>g(n);
        buildGraph(g,e);
        vector<bool>visited(n,false);
        dfs(g,visited,s);
        return visited[d];
    }
};