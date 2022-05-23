```
class Solution {
public:
int findMaxForm(vector<string>& s, int m, int n) {
int size = s.size();
int res = 0;
for(int i = 0;i<size;i++){
int mc = 0,nc = 0;
for(auto ch : s[i]){
if(ch == '0') mc++;
else nc++;
}
if(mc<=m && nc<=n) res++;
}
return res;
}
};
```
```
class Solution {
public:
vector<vector<pair<int,int>>>dp;
pair<int,int> countZO(string s){
int z = 0, o = 0;
for(auto ch : s){
if(ch == '0') z++;
else o++;
}
return {z,o};