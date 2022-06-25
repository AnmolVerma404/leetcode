class Solution {
public:
    vector<int>par;
    vector<int>rank;
    int findPar(int p){
        if(p == par[p]){
            return p;
        }
        return par[p] = findPar(par[p]);
    }
    void unionn(int u,int v){
        u = findPar(u);
        v = findPar(v);
        
        if(rank[u]>rank[v]){
            par[v] = u;
        }else if(rank[v]>rank[u]){
            par[u] = v;
        }else if(rank[u] == rank[v]){
            par[v] = u;
            rank[u]++;
        }
    }
    bool isBipartite(vector<vector<int>>& g) {
        int n = g.size();
        par.resize(n,0);
        rank.resize(n,0);
        for(int i = 0;i<n;i++){
            par[i] = i;
        }
        for(int i = 0;i<n;++i){
            for(int j = 0;j<g[i].size();++j){
                if(findPar(i)!=findPar(g[i][j])){
                    unionn(g[i][0],g[i][j]);
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};