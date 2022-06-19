// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	int cc,dd,nn;
	bool res = false;
    //Function to find if the given edge is a bridge in graph.
    void dfs(vector<int>g[],vector<bool>&visited,vector<int>&tin,vector<int>&low,int timer,int i,int parent){
        visited[i] = true;
        tin[i] = low[i] = timer++;
        for(auto j : g[i]){
            if(j == parent) continue;
            if(!visited[j]){
                dfs(g,visited,tin,low,timer,j,i);
                low[i] = min(low[i],low[j]);
                if(low[j]>tin[i]){
                    if(i == cc && j == dd){
                        res = true;
                    }else if(j == cc && i == dd){
                        res = true;
                    }
                }
            }else{
                low[i] = min(low[i],tin[j]);
            }
        }
    }
    int isBridge(int n, vector<int> g[], int c, int d) 
    {
        nn = n;
        cc = c;
        dd = d;
        vector<bool>visited(n,false);
        vector<int>tin(n,-1);
        vector<int>low(n,-1);
        int timer = 0;
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                dfs(g,visited,tin,low,timer,i,-1);
            }
        }
        if(res) return 1;
        return 0;
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends