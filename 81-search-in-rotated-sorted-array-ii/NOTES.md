```
class Solution {
public:
bool search(vector<int>& v, int t) {
int p = 0,n = v.size();
for(int i = 0;i<n-1;i++){
if(v[i]>v[i+1]){
p = i+1;
break;
}
}
// cout<<p<<"\n";
if(t==v[p]) return true;
else if(t==v[p])
return true;
}
};
```