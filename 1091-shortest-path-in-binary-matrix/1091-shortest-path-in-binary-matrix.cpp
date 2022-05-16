class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& v) {
        int res = 1;
        int r = v.size();
        int c = v[0].size();
        if(r == 0) return -1;
        if(c == 0) return -1;
        if(v[0][0]!=0 || v[r-1][c-1]!=0) return -1;
        queue<pair<int,int>>q;
        q.push({0,0});
        vector<vector<int>>drn =  {{1,1}, {0,1},{1,0},{0,-1},{-1,0},{-1, -1},{1, -1},{-1, 1}};
        v[0][0] = 1;
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            int x = curr.first, y = curr.second;
            if(x == r-1 && y == c-1) return v[x][y];
            for(auto d : drn){
                int nx = x + d[0];
                int ny = y + d[1];
                if(nx>=0 && nx<r && ny>=0 && ny<c && v[nx][ny]==0){
                    q.push({nx,ny});
                    v[nx][ny] = v[x][y] + 1;
                }
            }
        }
        return -1;
    }
};