class Solution {
public:
    int n = 0;
    vector<int>trav;
    void buildGraph(vector<vector<int>>& isCon,vector<vector<int>>& g){
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(isCon[i][j]!=0){
                    if(i == j){
                        continue;
                    }
                    g[i].push_back(j);
                }
            }
        }
    }
    void dfs(vector<vector<int>>&g,vector<bool>&visited,int i){
        visited[i] = true;
        trav.push_back(i);
        for(auto j : g[i]){
            if(!visited[j]){
                dfs(g,visited,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isCon) {
        n = isCon.size();
        vector<vector<int>>g(n);
        buildGraph(isCon,g);
        vector<bool>visited(n,false);
        int res = 0;
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                res++;
                dfs(g,visited,i);
            }
        }
        // for(int i = 0;i<g.size();i++){
        //     for(int j = 0;j<g[i].size();j++){
        //         cout<<g[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        // for(auto i : trav) cout<<i<<" ";
        // cout<<"\n";
        return res;
    }
};