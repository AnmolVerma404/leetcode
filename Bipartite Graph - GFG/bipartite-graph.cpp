// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isBipartite(int n, vector<int>g[]){
    vector<int> color(n, -1); // visited color:- 0->red, 1->blue
    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            queue<int> q;
            q.push(i);
            color[i] = 1;
            while (!q.empty())
            {
                int top = q.front();
                q.pop();
                for (auto j : g[top])
                {
                    if (color[j] == -1)
                    {
                        q.push(j);
                        color[j] = 1 - color[top];
                    }
                    else if (color[j] == color[top])
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends