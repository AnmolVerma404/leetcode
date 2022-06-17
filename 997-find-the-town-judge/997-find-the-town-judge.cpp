class Solution {
public:
    void buildGraph(vector<vector<int>>& g,vector<vector<int>>& trust){
        for(int i = 0;i<trust.size();i++){
            g[trust[i][0]].push_back(trust[i][1]);
        }
    }
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>g(n+1);
        buildGraph(g,trust);
        
        vector<int>inDegree(n+1,0);
        vector<int>outDegree(n+1,0);
        
        for(int i = 0;i<=n;i++){
            for(int j = 0;j<g[i].size();j++){
                inDegree[g[i][j]]++;
                outDegree[i]++;
            }
        }
        for(auto i : inDegree)cout<<i<<" ";
        cout<<"\n";
        for(auto i : outDegree)cout<<i<<" ";
        for(int i = 1;i<=n;i++){
            if(inDegree[i] == n-1){
                if(outDegree[i] == 0){
                    return i;
                }
            }
        }
        return -1;
    }
};