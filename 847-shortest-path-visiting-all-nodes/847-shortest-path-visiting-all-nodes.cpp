class Solution {
    int solve(vector<vector<int>>&g){
        int n = g.size();
        //Using Bitmasking we can see if we visited all the nodes
        int all = (1<<n) - 1;//if n = 4 all = 1111. This is a binary value
        
        queue<pair<int,pair<int,int>>>q;
        set<pair<int,int>>vis;//This will keep track of visited node
        
        for(int i = 0;i<n;i++){
            int mask = (1<<i);//2^i
            q.push({i,{0,mask}});
            vis.insert({i,mask});
        }
        
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            int val = node.first;
            int dist = node.second.first;
            int mask = node.second.second;
            //Now visit all the connected nodes to val
            for(auto v : g[val]){
                int _mask = (mask | (1<<v));//0010|0001->0011
                if(_mask==all){//If visited all the nodes
                    return dist + 1;
                }else if(vis.count({v,_mask})){//If already visited, therefor this will count for all the possibilities => 3->0->1 is different from 2->0->1, they all will be stored in the set.
                    continue;             
                }
                vis.insert({v,_mask});
                q.push({v,{dist+1,_mask}});
            }
        }
        return 0;        
    }
public:
    int shortestPathLength(vector<vector<int>>& g) {
        if(g.size()==1) return 0;
        return solve(g);
        // return (1<<4);
    }
};