class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size()+1;
        vector<int>inDegree(n+1,0);
        for(auto it : edges){
            inDegree[it[0]]++;
            inDegree[it[1]]++;
        }
        for(auto i = 1;i<=n;i++) if(inDegree[i] == n-1) return i;
        return 0;
    }
};