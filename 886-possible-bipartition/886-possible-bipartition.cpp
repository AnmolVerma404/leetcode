class Solution {
public:
    void buildGraph(vector<vector<int>>&g,vector<vector<int>>&dis,int n){
        for(int i = 0;i<dis.size();i++){
            g[dis[i][0]].push_back(dis[i][1]);
            g[dis[i][1]].push_back(dis[i][0]);
        }
    }
    bool gC(vector<vector<int>>&g,vector<int>&color,int i){
        if(color[i] == -1) color[i] = 1;
        for(auto j : g[i]){
            if(color[j] == -1){
                color[j] = 1 - color[i];
                if(!gC(g,color,j)){
                    return false;
                }
            }else if(color[j]==color[i]){
                return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dis) {
        vector<vector<int>>g(n+1);
        buildGraph(g,dis,n);
        vector<int>color(n+1,-1);
        for(int i = 1;i<=n;i++){
            if(color[i]==-1){
                if(!gC(g,color,i)){
                    return false;
                }
            }
        }
        return true;
    }
};