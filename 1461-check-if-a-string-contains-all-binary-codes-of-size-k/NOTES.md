```
class Solution {
public:
void perm(int k,vector<string>&v,string s){
if(s.size() == k){
v.push_back(s);
return;
}
perm(k,v,s+"0");
perm(k,v,s+"1");
}
bool hasAllCodes(string s, int k) {
vector<string>allCode;
if(s.size()<k){
return false;
}
perm(k,allCode,"");
for(auto i : allCode){
// cout<<i<<" ";
if(s.find(i)==string::npos){
return false;
}
}
return true;
}
};
```