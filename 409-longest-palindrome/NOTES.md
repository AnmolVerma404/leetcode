```
class Solution {
public:
int longestPalindrome(string s) {
/*
if a digit has odd -1
if even
*/
unordered_map<char,int>mp;
int res=0;
for(char i : s)mp[i]++;
bool odd = true;
if(mp.size()==1) return mp.begin()->second;
for(auto i : mp){
if(odd && i.second==1){
res+=1;
odd = false;
}
if(i.second%2==0)res+=i.second;
if(i.second!=1 && i.second%2!=0){
res+=i.second-1;
}
cout<<i.first<<" "<<i.second<<" "<<res<<"\n";
}
return res;
}
};
```