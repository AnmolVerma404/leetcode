int res = 0;
// cout<<bS(v,6);
while(i<j){
cout<<t-v[i]-v[j]<<" ";
if(bS(v,t-v[i]-v[j])){
res++;
continue;
}else{
i++;
j--;
}
}
return res;
}
};
```
```
class Solution {
public:
int threeSumMulti(vector<int>& v, int t) {
long mod = 10e9+7;
int n = v.size();
long res = 0;
for(int i = 0;i<n;i++){
vector<int>c(101);
for(int j = i+1;j<n;j++){
int k = t-v[i]-v[j];
if(k>=0 && k<=100 && c[k]>0){
res+=c[k];
res%=mod;
}
c[v[j]]++;
}
}
return (int)res;
}
};
```