class Solution {
public:
    bool bipartite(vector<vector<int>>&g,vector<int>&color,int i){
        if(color[i]==-1) color[i] = 1;
        for(auto j : g[i]){
            if(color[j]==-1){
                color[j] = 1 - color[i];
                if(!bipartite(g,color,j)){
                  return false;
                 }
            }else if(color[j] == color[i]){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& g) {
        int n = g.size();
        vector<int>color(n,-1);
        for(int i = 0;i<n;i++){
            if(color[i] == -1){
                if(!bipartite(g,color,i)){
                    return false;
                }
            }
        }
        return true;
    }
};