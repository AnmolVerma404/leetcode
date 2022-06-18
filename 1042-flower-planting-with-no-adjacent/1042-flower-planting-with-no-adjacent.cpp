class Solution {
public:
    void buildGraph(vector<vector<int>>& g,vector<vector<int>>& paths,int n){
        for(int i = 0;i<paths.size();i++){
            g[paths[i][0]].push_back(paths[i][1]);
            g[paths[i][1]].push_back(paths[i][0]);
        }       
    }

    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>>g(n+1);
        
        buildGraph(g,paths,n);
        vector<int>color(n+1,-1);
        for(int i = 1;i<=n;i++){
            vector<bool>colored(5,false);
            for(auto j : g[i]){
                if(color[j] != -1) colored[color[j]] = true;
            }
            for(int j = 1;j<=4;j++){
                if(!colored[j]){
                    color[i] = j;
                    break;
                }
            }
        }
        vector<int>::iterator it;
        it = color.begin();
        color.erase(it);
        return color;
    }
};