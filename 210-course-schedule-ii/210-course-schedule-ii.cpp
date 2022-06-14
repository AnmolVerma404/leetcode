class Solution {
public:
    void makeGraph(vector<vector<int>>&g,int u,int v){
        g[v].push_back(u);
    }
    void dfs(vector<vector<int>>&g,vector<bool>&visited,stack<int>&st,int i){
        visited[i] = true;
        for(auto j : g[i]){
            if(!visited[j]){
                dfs(g,visited,st,j);
            }
        }
        st.push(i);
    }
    void topo(vector<vector<int>>&g,stack<int>&st){
        int n = g.size();
        vector<bool>visited(n,false);
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                dfs(g,visited,st,i);
            }
        }
    }
    bool isValid(vector<vector<int>>& pre,vector<int>&ts){
        unordered_map<int,int>mp;
        for(int i = 0;i<ts.size();i++){
            mp[ts[i]] = i;
        }
        for(int i = 0;i<pre.size();i++){
            if(mp[pre[i][0]]<mp[pre[i][1]]){
                return false;
            }
        }
        return true;
    }
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        if(pre.size()==0){
            vector<int>res;
            while(n--){
                res.push_back(n);
            }
            return res;
        }
        vector<vector<int>>g(n);
        for(auto i : pre){
            makeGraph(g,i[0],i[1]);
        }
        stack<int>st;
        topo(g,st);
        vector<int>ts;
        while(!st.empty()){
            ts.push_back(st.top());
            st.pop();
        }
        // for(auto i : ts) cout<<i<<" ";
        if(!isValid(pre,ts)){
            return {};
        }
        return ts;
    }
};