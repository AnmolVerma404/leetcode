// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.
bool isPossible(bool graph[101][101],vector<int>&color,int idx,int n,int i){
    for(int k = 0;k<n;++k){
        if(k!=idx && graph[k][idx] == 1 && color[k] == i) return false;
    }
    return true;
}
bool gC(bool graph[101][101],vector<int>&color,int m,int n,int idx){
    if(idx == n) return true;
    for(int i = 1;i<=m;i++){
        if(isPossible(graph,color,idx,n,i)== true){
            color[idx] = i;
            if( gC(graph,color,m,n,idx+1) == true) return true;
            color[idx] = 0;
        }
    }
    return false;
}
bool graphColoring(bool graph[101][101], int m, int n) {
    vector<int>color(n,0);
    // for(int i = 0;i<101;++i){
    //     for(int j = 0;j<101;++j){
    //         if(graph[i][j]){
    //          cout<<i<<":"<<j<<" - ";   
    //         }
    //     }
    //     cout<<"\n";
    // }
    // return true;
    return gC(graph,color,m,n,0);
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends