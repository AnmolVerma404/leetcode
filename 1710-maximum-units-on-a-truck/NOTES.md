```
#define pi pair<int,int>
class Solution {
public:
int maximumUnits(vector<vector<int>>& v, int truckSize) {
int res = 0;
priority_queue<pi,vector<pi>,greater<pi>>pq;
for(auto i : v){
pq.push({i[0],i[1]});
}
while(!pq.empty()){
cout<<pq.top().first<<" "<<pq.top().second<<"\n";
pq.pop();
}
return res;
}
};
```