Not working in Longer test cases
```
#define pip pair<int,pair<int,int>>
class Solution {
public:
int removeCoveredIntervals(vector<vector<int>>& v) {
int n = v.size();
int mx = INT_MIN;
vector<int>diff(n);
for(int  i = 0 ; i<n;i++){
diff[i] = v[i][1] - v[i][0];
mx = max(mx,v[i][1]);
}
mx++;
priority_queue<pip>pq;
for(int i = 0;i<n;i++){
pq.push({diff[i],{v[i][0],v[i][1]}});
}
vector<int>val(mx,-1);
for(int i = 0;i<mx;i++){
int r = pq.top().second.first,c = pq.top().second.second;
bool allOne = true;
for(int j = r;j<=c;j++){
if(val[j]==-1) allOne = false;
val[j] = 1;
}
if(allOne) n--;
pq.pop();
if(pq.empty()) break;
}
return n;
}
};
```