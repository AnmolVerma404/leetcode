// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int n, vector<int> g[]) {
    int visited[n];
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            queue<pair<int, int>> q;
            q.push({i, -1});
            while (!q.empty())
            {
                int node = q.front().first;
                int par = q.front().second;
                visited[node] = true;
                q.pop();
                for (auto j : g[node])
                {
                    if (!visited[j])
                    {
                        q.push({j, node});
                        visited[j] = true;
                    }
                    else if (par != j)
                    {
                        return true;
                    }
                }
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