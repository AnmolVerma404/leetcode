class Solution {
public:
    bool solve(vector<vector<int>> &h,vector<vector<int>> &v,int i,int j,int mid,int n,int m){
        if(i == n-1 && j == m-1) return true;
        v[i][j] = 1;
        bool op = false;
        if(i>0 && v[i-1][j] == 0 && abs(h[i][j]-h[i-1][j])<=mid){
            op = op || solve(h,v,i-1,j,mid,n,m);
        }
        if(j>0 && v[i][j-1] == 0 && abs(h[i][j]-h[i][j-1])<=mid){
            op = op || solve(h,v,i,j-1,mid,n,m);
        }
        if(i<n-1 && v[i+1][j] == 0 && abs(h[i][j]-h[i+1][j])<=mid){
            op = op || solve(h,v,i+1,j,mid,n,m);
        }
        if(j<m-1 && v[i][j+1] == 0 && abs(h[i][j]-h[i][j+1])<=mid){
            op = op || solve(h,v,i,j+1,mid,n,m);
        }
        return op;
    }
    int minimumEffortPath(vector<vector<int>>& h) {
        int n = h.size(),m = h[0].size();
        int s = 0, e = INT_MAX, ans = INT_MAX;
        while(s<=e){
            vector<vector<int>>v(100,vector<int>(100,0));
            int mid = s + (e-s)/2;
            if(solve(h,v,0,0,mid,n,m)){
                ans = min(ans,mid);
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        return ans;
    }
};