Gready
```
class Solution {
public:
int findContentChildren(vector<int>& g, vector<int>& s) {
sort(g.begin(),g.end());
sort(s.begin(),s.end());
int i = 0 , j = 0 , count = 0;
while(i<g.size() && j <s.size()){
if(s[j]>=g[i]){
count++;
i++;
j++;
}else{
j++;
}
}
return count;
}
};
```
Priority Queue
```
class Solution {
public:
int findContentChildren(vector<int>& g, vector<int>& s) {
priority_queue<int,vector<int>,greater<int>>gpq;
priority_queue<int,vector<int>,greater<int>>spq;
int res = 0;
for(auto i : g) gpq.push(i);
for(auto i : s) spq.push(i);
int n = g.size(),m = s.size();
while((!gpq.empty())&&(!spq.empty())){
int gt = gpq.top(),st = spq.top();
gpq.pop();
spq.pop();
if(st>=gt) res++;
else{
gpq.push(gt);
}
}
return res;
}
};
```