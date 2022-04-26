class Solution {
public:
    int minNode(int n,vector<int>k,vector<bool>s){
        int mn = INT_MAX;
        int mi = -1;
        for(int i = 0;i<n;i++){
            if(s[i] == false && k[i]<mn){
                mn = k[i];
                mi = i;
            }
        }
        return mi;
    }
    int solve(int n,vector<vector<int>>c){
        vector<int>p(n);
        vector<int>k(n);
        vector<bool>s(n);
        for(int i = 0;i<n;i++){
            k[i] = INT_MAX;
            s[i] = false;
        }
        p[0] = -1;
        k[0] = 0;
        for(int i = 0;i<n-1;i++){
            int u = minNode(n,k,s);
            s[u] = true;
            for(int v = 0;v<n;v++){
                if(c[u][v] && s[v] == false && c[u][v]<k[v]){
                    k[v] = c[u][v];
                    p[v] = u;
                }
            }
        }
        int cost = 0;
        for(int i = 1;i<n;i++){
            cost+=c[p[i]][i];
        }
        return cost;
    }
    int minCostConnectPoints(vector<vector<int>>& v) {
        int n = v.size();
        vector<vector<int>>res(n,vector<int>(n));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(i!=j){
                    res[i][j] = abs(v[i][0]-v[j][0]) + abs(v[i][1]-v[j][1]);
                }
            }
        }
        int ans = solve(n,res);
        return ans;
    }
};