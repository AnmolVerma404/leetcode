// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  bool dfsCycle(vector<int> g[], vector<bool> &visited, vector<bool> &dfsVisited, int i)
    {
        visited[i] = true;
        dfsVisited[i] = true;
        for (auto j : g[i])
        {
            if (visited[j] == false)
            {
                if (dfsCycle(g, visited, dfsVisited, j))
                {
                    return true;
                }
            }
            else if (dfsVisited[j] == true)
            {
                return true;
            }
        }
        dfsVisited[i] = false;
        return false;
    }
    
    bool isCyclic(int n, vector<int> g[]) {
        vector<bool> visited(n, false);
        vector<bool> dfsVisited(n, false);
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == false)
            {
                if (dfsCycle(g, visited, dfsVisited, i))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends