class Solution {
public:
    vector<vector<string>>res;
    vector<vector<string>> solveNQueens(int n) {
        vector<string>v(n, string(n, '.'));
        nQueens(v,0);
        return res;
    }
    void nQueens(vector<string>&v, int r){
        if(r == v.size()){
            res.push_back(v);
            return;
        }
        for(int c = 0;c<v.size();c++){
            if(isSafe(v,r,c)){
                v[r][c] = 'Q';
                nQueens(v,r+1);
                v[r][c] = '.';
            }
        }
    }
    bool isSafe(vector<string>&v,int r, int c){
        int n = v.size();
        for(int i = 0;i<v.size();i++){
            if(v[i][c] == 'Q') return false;
            if(r - i >= 0 && c - i >= 0 && v[r - i][c - i] == 'Q') return false;
		    if(r - i >= 0 && c + i <  n && v[r - i][c + i] == 'Q') return false;
        }
        return true;
    }
};