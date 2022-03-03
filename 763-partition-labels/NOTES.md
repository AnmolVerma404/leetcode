```
class Solution {
public:
vector<int> partitionLabels(string s) {
unordered_map<char,pair<int,int>>mp;
vector<int>res;
for(int i = 0;i<s.size();i++){
if(mp.find(s[i])!=mp.end()){
auto itr = mp.find(s[i]);
itr->second.second = i;
continue;
}
mp.insert({s[i],{i,i}});
}
for(auto i : mp){
cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<"\n";
}
//Upto now we have all the start and end index of mp
return res;
}
};
```