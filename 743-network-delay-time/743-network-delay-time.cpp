class Solution {
public:
    void buildGraph(vector<vector<int>>&times,vector<vector<pair<int,int>>>&g){
        
        for(int i = 0;i<times.size();i++){
            g[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        
    }
    vector<int> dijkstra(vector<vector<pair<int,int>>>&g,int n,int k){
        vector<int>dist(n+1,INT_MAX);
        dist[k] = 0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});
        
        vector<bool>visited(n+1,false);
        
        while(!pq.empty()){
            int mainDist = pq.top().first;
            visited[pq.top().second] = true; 
            
            pq.pop();
            
            for(auto i : g[mainDist]){
                int next = i.first;
                int nextDist = i.second;
                
                if(!visited[next] && dist[mainDist] + nextDist < dist[next]){
                    
                    dist[next] = dist[mainDist] + nextDist;
                    pq.push({dist[next],next});
                    
                }
            }
        }
        
        return dist;
    }
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>g(n+1);
        
         for(int i = 0;i<times.size();i++){
            g[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        
        
        vector<int>dist(n+1,1e9);
        dist[k] = 0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});
        
        vector<bool>visited(n+1,false);
        
        while(!pq.empty()){
            int mainDist = pq.top().second;
            visited[pq.top().second] = true; 
            
            pq.pop();
            
            for(auto i : g[mainDist]){
                int next = i.first;
                int nextDist = i.second;
                
                if(!visited[next] && dist[mainDist] + nextDist < dist[next]){
                    
                    dist[next] = dist[mainDist] + nextDist;
                    pq.push({dist[next],next});
                    
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