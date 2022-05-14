class Solution {
public:
    int networkDelayTime(vector<vector<int>>& v, int N, int k) {
        vector<pair<int,int>>g[N+1];
        for(int i = 0;i<v.size();i++){
            g[v[i][0]].push_back({v[i][1],v[i][2]});
        }
        vector<int>dist(N+1,1e9);
        dist[k] = 0;    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});
        pair<int,int>temp;
        bool visit[N+1];
        memset(visit,false,sizeof(visit));
        while(!pq.empty()){
            temp = pq.top();
            pq.pop();
            int u = temp.second;
            visit[u] = true;
            for(int i =0;i<g[u].size();i++){
                int v = g[u][i].first;
                int w = g[u][i].second;
                if(visit[v] == false && dist[v]>dist[u] + w){
                    dist[v] = dist[u] + w;
                    pq.push({dist[v],v});
                }
            }
        }
        int ans = 0;
        for(int i = 1;i<dist.size();i++){
            ans = max(ans,dist[i]);
        }
        if(ans == 1e9) return -1;
        return ans;
    }
};