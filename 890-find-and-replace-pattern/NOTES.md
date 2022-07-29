```
class Solution {
public:
vector<string> findAndReplacePattern(vector<string>& w, string p) {
int n = w.size();
int m = p.size();
unordered_map<char,int>temp;
for(int i = 0;i<m;++i){
temp[p[i]]++;
}
unordered_map<int,string>freq;
for(auto &it : temp){
freq[it.second] += it.first;
}
// for(auto &it : freq) cout<<it.first<<" "<<it.second<<"\n";
vector<string>res;
unordered_map<int,string> t = freq;
for(int i = 0;i<n;++i){
string curr = w[i];
unordered_map<int,char> wmap;
int flag = -1;
for(auto &it : curr) wmap[it]++;
for(auto &it : wmap){
if(freq.find(it.second)!=freq.end()){
flag = 1;
string str = freq[it.second];
if(str.size() == 0){
flag = 0;
break;
}
str.pop_back();
freq[it.second] = str;
}
}
if(flag == 1){
res.push_back(curr);
}
freq = t;
}
return res;
}
};
```