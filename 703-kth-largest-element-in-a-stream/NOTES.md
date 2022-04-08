```
class KthLargest {
public:
priority_queue<int>pq;
int t = 0;
KthLargest(int k, vector<int>& v) {
t = k;
for(auto i : v) pq.push(i);
// cout<<"K ";
// add()
}
int add(int val) {
vector<int>temp;
int i = t;
pq.push(val);
while((i--)>1){
temp.push_back(pq.top());
pq.pop();
}
int res = pq.top();
for(auto j : temp){
pq.push(j);
}
// while(!pq.empty()){
//     cout<<pq.top();
//     temp.push_back(pq.top());
//     pq.pop();
// }
// for(auto j : temp){
//   pq.push(i);
// }
// temp.clear();
return res;
}
};
​
/**
* Your KthLargest object will be instantiated and called as such:
* KthLargest* obj = new KthLargest(k, nums);
* int param_1 = obj->add(val);
*/
```