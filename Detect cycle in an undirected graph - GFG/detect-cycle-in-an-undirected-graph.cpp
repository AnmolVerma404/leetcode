// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  bool dfsCycle(vector<int>g[],vector<bool>&visited,int i,int p){
      visited[i] = true;
      for(auto j : g[i]){
          if(!visited[j]){
              if(dfsCycle(g,visited,j,i)){
                  return true;
              }
          }else if(j!=p){
              return true;
          }
      }
      return false;
  }
    bool isCycle(int n, vector<int> g[]) {
        vector<bool>visited(n,false);
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                if(dfsCycle(g,visited,i,-1)){
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends