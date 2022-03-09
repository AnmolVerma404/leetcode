}
public:
int matrixScore(vector<vector<int>>& v) {
int res = 0,r = v.size();
if(r==1 && v[0].size()==1) return 1;
int sum = 0;
unordered_map<int,int>mp;
for(int i = 0;i<r;i++){
int c = v[i].size();
string s = "";
for(int j = 0;j<c;j++){
s+=v[i][j] + '0';
}
int temp = bti(s);
mp[i] = temp;
sum+=temp;
}
cout<<sum<<"\n";
//Find the max ~row sum
for(int i = 0;i<r;i++){
int c = v[i].size();
string s = "";
for(int j = 0;j<c;j++){
if(v[i][j]==1)s+=0+'0';
else s+=1+'0';
}
int temp = bti(s);
if(sum<sum-mp[i]+temp){
sum = sum - mp[i]+temp;
mp[i] = temp;
}
}
for(int i = 0;i<v[0].size();i++){
string s = "";
for(int j = 0;j<r;j++){
if(v[j][i]==1)s+=0+'0';
else s+=1+'0';
}
int temp = bti(s);
if(sum<sum-mp[i]+temp){
sum = sum - mp[i]+temp;
mp[i] = temp;
}
}
cout<<sum<<"\n";
return res;
}
};
```