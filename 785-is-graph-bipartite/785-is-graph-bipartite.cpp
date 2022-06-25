class Solution {
public:
    bool dfs(vector<vector<int>>&g,vector<int>&color,int i){
        if(color[i] == -1) color[i] = 1;
        for(auto &j : g[i]){
            if(color[j] == -1){
                color[j] = 1 - color[i];
                if(!dfs(g,color,j)){
                    return false;
                }
            }else if(color[i] == color[j]){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& g) {
        int n = g.size();
        vector<int>color(n,-1);
        for(int i = 0;i<n;++i){
            if(color[i] == -1){
                if(!dfs(g,color,i)){
                    return false;
                }
            }
        }
        return true;
    }
};