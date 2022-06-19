class Solution {
public:
    stack<int>st;
    void buildGraph(vector<vector<int>>& g, vector<vector<int>>& e){
        for(int i = 0;i<e.size();i++){
            g[e[i][0]].push_back(e[i][1]);
        }
    }
    void dfs(vector<vector<int>>& g,vector<bool>&visited,int i){
        visited[i] = true;
        for(auto j : g[i]){
            if(!visited[j]){
                dfs(g,visited,j);
            }
        }
        st.push(i);
    }
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        // vector<vector<int>>g(n);
        // vector<bool>visited(n,false);
        // for(int i = 0;i<n;i++){
        //     if(!visited[i]){
        //         dfs(g,visited,i);
        //     }
        // }
        // vector<int>res;
        // while(!st.empty()){
        //     cout<<st.top()<<" ";
        //     st.pop();
        // }
        vector<int>inDegree(n,0);
        for(auto it : edges){
            inDegree[it[1]]++;
        }
        vector<int>res;
        for(auto i = 0;i<n;i++){
            if(inDegree[i] == 0) res.push_back(i);
        }
        return res;
    }
};