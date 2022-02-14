```
class Solution {
public:
bool carPooling(vector<vector<int>>& v, int c) {
priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,greater<pair<pair<int,int>,int>>>pq;
for(int i =0;i<v.size();i++){
pq.push({{v[i][1],v[i][2]},v[i][0]});
}
int sumC = 0;
while(!pq.empty()){
// cout<<pq.top().first.first<<" "<<pq.top().first.second<<" "<<pq.top().second<<"\n";
sumC+=pq.top().second();
pq.pop();
}
return true;
}
};
/*
trips = [[2,1,5],[3,3,7],[1,6,8]], capacity = 5
​
*/
```