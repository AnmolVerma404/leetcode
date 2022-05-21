```
class Solution {
public:
int coinChange(vector<int>& c, int a) {
if(a == 0) return 0;
priority_queue<int>pq;
unordered_map<int,int>mp;
for(auto i : c){
mp[i]++;
}
for(auto i : mp){
pq.push(i.first);
}
int count = 0;
while(!pq.empty()){
if(a<pq.top()) continue;
int top = pq.top();
pq.pop();
int temp = a;
while(temp>0){
temp-=top;
}
}
return 0;
}
};
```