```
class Solution {
public:
int func(int n,int m,vector<vector<int>>&t){
if(n == 0 && m == 0) return t[n][m];
if(n<0 || m<0 || m>=t[n].size()) return 0;
int upl = t[n][m] + func(n-1,m-1,t);
int upr = t[n][m] + func(n-1,m,t);
return min(upl,upr);
}
int minimumTotal(vector<vector<int>>& t) {
int n = t.size();
int mn = INT_MAX;
for(int i = 0;i<n;++i){
mn = min(mn,min(t[n-1][i] + func(n-2,i-1,t),t[n-1][i] + func(n-2,i,t)));
}
return mn;
}
};
```