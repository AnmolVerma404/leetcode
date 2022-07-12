class Solution {
public:
    bool bt(vector<int>&v,vector<int>&visited,int t,int sum,int i,int k){
        if(k == 1) return true;
        if(sum == t) return bt(v,visited,t,0,0,k-1);
        
        for(int j = i;j<v.size();++j){
            if(visited[j] || sum + v[j]>t) continue;
            
            visited[j] = true;
            if(bt(v,visited,t,sum+v[j],j+1,k)) return true;
            visited[j] = false;
        }
        return false;
    }
    bool makesquare(vector<int>& v) {
        int n = v.size();
        int sum = 0;
        for(auto &it : v) sum+=it;
        if(n<4 || sum%4) return false;
        
        vector<int>visited(n,false);
        
        return bt(v,visited,sum/4,0,0,4);
    }
};