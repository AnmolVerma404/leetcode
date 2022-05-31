// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  bool bfs(vector<int> g[], int n)
    {
        queue<int> q;
        vector<int> inOrder(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (auto j : g[i])
            {
                inOrder[j]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (inOrder[i] == 0)
                q.push(i);
        }
        int count = 0;
        while (!q.empty())
        {
            int top = q.front();
            q.pop();
            count++;
            for (auto i : g[top])
            {
                inOrder[i]--;
                if (inOrder[i] == 0)
                {
                    q.push(i);
                }
            }
        }
        if(count == n) return false;
        return true;
    }

    bool isCyclic(int n, vector<int> g[]) {
        return bfs(g,n);
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