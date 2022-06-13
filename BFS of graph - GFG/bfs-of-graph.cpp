// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> bfsOfGraph(int n, vector<int> g[]) {
        vector<bool>visited(n,false);
        vector<int>res;
        // for(int i = 0;i<n;i++){
        //     if(!visited[i]){
                queue<int>q;
                q.push(0);
                visited[0] = true;
                while(!q.empty()){
                    int top = q.front();
                    q.pop();
                    res.push_back(top);
                    for(int j : g[top]){
                        if(!visited[j]){
                            visited[j] = true;
                            q.push(j);
                        }
                    }
                }
        //     }
        // }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends