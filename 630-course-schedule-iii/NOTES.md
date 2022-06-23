```
class Solution {
public:
int scheduleCourse(vector<vector<int>>& c) {
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
int n = c.size();
int sum = 0;
for(int i = 0;i<n;++i){
if(c[i][1]-c[i][0]>0){
pq.push({c[i][1]-c[i][0],i});
}
sum+=c[i][1];
}
int res = 0;
// cout<<sum<<"\n";
int time = 0;
while(!pq.empty()){
// cout<<pq.top().first<<" "<<pq.top().second<<"\n";
auto diff = pq.top().first;
auto i = pq.top().second;
time+=c[i][0];
if(time>c[i][1]) break;
res++;
pq.pop();
}
return res;
}
};
```