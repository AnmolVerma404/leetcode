class Solution {
public:
    int totalNQueens(int n) {
        vector<vector<bool>>q(n,vector<bool>(n,false));
        return nq(q,0);
    }
    int nq(vector<vector<bool>>&q,int r){
        if(r == q.size()){
            return 1;
        }
        int ct = 0;
        for(int c = 0;c<q.size();++c){
            if(is(q,r,c)){
                q[r][c] = true;
                ct+=nq(q,r+1);
                q[r][c] = false;
            }
        }
        return ct;
    }
    bool is(vector<vector<bool>>&q,int r,int c){
        int n = q.size();
        for(int i = 0;i<n;++i){
            if(q[i][c] == true) return false;
            if(r-i>=0 && c-i>=0 && q[r-i][c-i] == true) return false;
            if(r-i>=0 && c+i<n && q[r-i][c+i] == true) return false;
        }
        return true;
    }
};