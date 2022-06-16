class Solution {
public:
    void dfs(vector<vector<int>>& g,vector<bool>&visited,vector<bool>&locked,int i){
        visited[i] = true;
        for(auto j : g[i]){
            locked[j] = false;
        }
        for(auto j : g[i]){
            if(!visited[j] && !locked[j]){
                dfs(g,visited,locked,j);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& g) {
        int n = g.size();
        vector<bool>visited(n,false);
        vector<bool>locked(n,true);
        locked[0] = false;
        for(int i = 0;i<n;i++){
            if(!visited[i] && !locked[i]){
                dfs(g,visited,locked,i);
            }
        }
        for(auto i : locked){
            if(i == true){
                return false;                
            }
        }
        return true;
    }
};