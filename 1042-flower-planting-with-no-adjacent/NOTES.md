if(color[prev] == 4){
color[j] = 1;
}else{
color[j] = 4;
}
}else if(color[i] = 4){
if(color[prev] == 1){
color[j] = 2;
}else{
color[j] = 4;
}
}
}
}
}
vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
vector<vector<int>>g(n+1);
buildGraph(g,paths,n);
vector<int>color(n+1,-1);
for(int i = 1;i<n;i++){
if(color[i] == -1){
dfs(g,color,i,-1);
}
}
return {color.begin()+1,color.end()};
}
};
```