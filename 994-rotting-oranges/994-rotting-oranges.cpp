class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) {
        int n = v.size(),m = v[0].size(),fresh = 0;
        queue<pair<int,int>>q;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(v[i][j] == 1) fresh++;
                if(v[i][j] == 2) q.push({i,j});
            }
        }
        int res = -1;
        vector<int>dirn = {-1,0,1,0,-1};
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto top = q.front();
                q.pop();
                for(int i = 0;i<4;i++){
                    int r = top.first + dirn[i];
                    int c = top.second + dirn[i+1];
                    if(r>=0 && c>=0 && r<n && c<m && v[r][c] == 1){
                        v[r][c] = 2;
                        q.push({r,c});
                        fresh--;
                    }
                }
            }
            res++;
        }
        if(fresh>0) return -1;
        if(res == -1) return 0;
        return res;
    }
};