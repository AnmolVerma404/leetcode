O(n^2)
```
class Solution {
public:
int maxDistance(vector<int>& v) {
int res = 0,mx = INT_MIN,n = v.size();
for(int i = 0;i<n;i++){
for(int j = 0;j<n;j++){
if(i!=j && v[i]!=v[j]){
mx = max(mx,abs(i-j));
}
}
}
return mx;
}
};
```