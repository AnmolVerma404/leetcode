class Solution {
public:
    bool colorCycle(vector<vector<int>>&g,vector<bool>&color,int curr){
        queue<int>q;
        q.push(curr);
        color[curr] = 1;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            for(auto i : g[top]){
                if(color[i]==-1){
                    color[i] = 1 - color[top];
                    q.push(i);
                }else if(color[i]==color[top]){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool bfs(vector<vector<int>>&g,int n){
        vector<bool>color(n,-1);
        for(int i = 0;i<n;i++){
            if(color[i]==-1){
                if(!colorCycle(g,color,i)){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool bipartiteBfs(int src, vector<vector<int>>& adj, int color[]) {
        queue<int>q;
        q.push(src); 
        color[src] = 1; 
        while(!q.empty()) {
            int node = q.front(); 
            q.pop();

            for(auto it : adj[node]) {
                if(color[it] == -1) {
                    color[it] = 1 - color[node]; 
                    q.push(it); 
                } else if(color[it] == color[node]) {
                    return false; 
                }
            }
        }
        return true; 
    }
    bool checkBipartite(vector<vector<int>>& adj, int n) {
        int color[n];
        memset(color, -1, sizeof color); 
        for(int i = 0;i<n;i++) {
            if(color[i] == -1) {
                if(!bipartiteBfs(i, adj, color)) {
                    return false;
                }
            }
        }
        return true; 
    }
    bool isBipartite(vector<vector<int>>& g) {
        int n = g.size();
        return checkBipartite(g,n);
    }
};