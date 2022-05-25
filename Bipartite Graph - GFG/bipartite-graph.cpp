// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool bipartiteDFS(vector<int> g[], vector<int> &color, int i)
    {
        if(color[i]==-1) color[i] = 1;//Set the current node color to 1
        for (auto j : g[i])
        {
            if (color[j] == -1)//If the next node is not visited
            {
                color[j] = 1 - color[i];//Set the next node color to opposite of parent node i.e. 0 if 1 or 1 if 0
                if(!bipartiteDFS(g,color,j)){
                    return false;
                }
            }
            else if (color[j] == color[i])//If next node is already visited check if the next node and the current node color are the same. If they are return false. Which implies the graph is not bipartite
            {
                return false;
            }
        }
        return true;//Finally return true
    }
	bool isBipartite(int n, vector<int>g[]){
	    vector<int> color(n, -1);
        for (int i = 0; i < n; i++)
        {
            if (color[i] == -1)
            {
                if (!bipartiteDFS(g, color, i))//Check if DFS is resulting true if not if's not a bipartite graph
                {
                    return false;
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