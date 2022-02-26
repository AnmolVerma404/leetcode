```
#define vvi vector<vector<int>>
class Solution {
int minKey(vector<int>key,vector<bool>mstSet){
int mn = INT_MAX,indx=0,v = key.size();
for(int i = 0;i<v;i++){
if(mstSet[i]==false && key[i]<mn){
mn = key[i];
indx = i;
}
}
return indx;
}
int prims(vvi g){
int v = g.size();
// cout<<v;
vector<int>p(v);
vector<int>key(v,INT_MAX);
vector<bool>mstSet(v,false);
vector<int>res;
key[0] = 0;
p[0] = -1;
// cout<<1<<" ";
for(int i = 0;i<v-1;i++){
int u = minKey(key,mstSet);
mstSet[u] = true;