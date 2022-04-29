// 0 no color
// 1 blue
// -1 red

class Solution {
public:
    bool visited(vector<vector<int>> &g,vector<int> &color,int c,int node){
        if(color[node]!=0) return color[node] == c;
        color[node] = c;
        for(int n : g[node]){
            if(!visited(g,color,-c,n)) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>color(n,0);
        for(int i = 0;i<n;i++){
            if(color[i]==0 && !visited(graph,color,1,i)) return false;
        }
        return true;
    }
};