if(abs(ans[i]-ans[j])==k){
​
count++;
}
}
}
return count;
​
}
};
```
2nd
```
class Solution {
public:
int findPairs(vector<int>& v, int k) {
set<pair<int,int>>st;
int n = v.size(),c = 0;
for(int i = 0;i<n;i++){
for(int j = i+1;j<n;j++){
if(abs(v[i]-v[j])==k){
if(st.count({v[i],v[j]})==0&&st.count({v[j],v[i]})==0){
// cout<<v[i]<<" "<<v[j]<<"\n";
st.insert({v[i],v[j]});
c++;
}
}
}
}
// for(auto i : st){
//     cout<<i.first<<" "<<i.second<<"\n";
// }
return st.size();
return c;
}
};
```