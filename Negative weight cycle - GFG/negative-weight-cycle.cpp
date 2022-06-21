// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int bellmanFord(vector<vector<int>>&g, int n)
    {
        int inf = 10000000;
        vector<int> dist(n, inf);
        dist[0] = 0;
        for (int i = 1; i < n; i++)
        {
            for (auto it : g)
            {
                if (dist[it[0]] + it[2] < dist[it[1]])
                {
                    dist[it[1]] = dist[it[0]] + it[2];
                }
            }
        }
        int fl = 0;
        for (auto it : g)
        {
            if (dist[it[0]] + it[2] < dist[it[1]])
            {
                fl = 1;
                break;
            }
        }
        if(fl) return 1;
        return 0;
    }
	int isNegativeWeightCycle(int n, vector<vector<int>>g){
	    return bellmanFord(g,n);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends