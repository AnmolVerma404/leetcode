```
class Solution {
public:
vector<vector<int>> generateMatrix(int n) {
vector<vector<int>>v(n,vector<int>(n,-1));
int c = 1;
for(int i = 0;i<n;i++){
//Right
for(int j = 0;j<n;j++){
if(v[i][j]!=-1){
break;
}
v[i][j] = c++;
}
//Down
for(int j = 0;j<n;j++){
if(v[i][j]!=-1){
break;
}
v[i][j] = c++;
}
//Left
for(int j = 0;j<n;j++){
if(v[i][j]!=-1){
break;
}
v[i][j] = c++;
}
//Up
for(int j = 0;j<n;j++){
if(v[i][j]!=-1){
break;
}
v[i][j] = c++;
}
}
}
};
```