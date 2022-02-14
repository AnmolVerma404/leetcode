```
class Solution {
public:
int maxResult(vector<int>& nums, int k) {
priority_queue<pair<int,int>>pq;
for(int i = 0;i<nums.size();i++){
pq.push({nums[i],i});
}
while(!pq.empty()){
cout<<pq.top().first<<" "<<pq.top().second<<"\n";
pq.pop();
}
return 0;
}
};
```