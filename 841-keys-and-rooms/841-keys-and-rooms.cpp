class Solution {
public:
    void dfs(vector<vector<int>>& g,vector<bool>&visited,int i){
        visited[i] = true;
        for(auto j : g[i]){
            if(!visited[j]){
                dfs(g,visited,j);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& g) {
        int n = g.size();
        vector<bool>visited(n,false);
        dfs(g,visited,0);
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
};