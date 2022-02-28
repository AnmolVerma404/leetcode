```
class Solution {
public:
vector<string> summaryRanges(vector<int>& v) {
vector<string>res;
int n = v.size();
int j = 0;
bool nZ = true;
for(int i = 0 ;i<n-1;i++){
if(v[i]+1!=v[i+1]){
if(j){
// cout<<j<<" ";
res.push_back(to_string(v[j])+"->"+to_string(v[i]));
j = 0;
nZ = true;
}
res.push_back(to_string(v[i]));
}else if(v[i]+1==v[i+1] && nZ){
if(j==0 ){
// cout<<i<<" ";
j = i;
nZ = false;
}
}
}
return res;
}
};
```