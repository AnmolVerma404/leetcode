// int u = findPar(req[i][0]);
// int v = findPar(req[i][1]);
// if(mp[u] == v || mp[v] == u){
//     cout<<i<<" ";
//     // cout<<req[i][0]<<" "<<req[i][1]<<"\n";
//     // cout<<mp[req[i][0]]<<" "<<req[i][1]<<"\n";
//     // cout<<mp[req[i][1]]<<" "<<req[i][0]<<"\n";
//     res[i] = false;
//     continue;
// }
unionn(req[i][0],req[i][1]);
}
for(int i = 0;i<req.size();i++){
int a = req[i][0];//0 | 2
int b = req[i][1];//2 | 1
int u = findPar(a);
int v = findPar(b);
// if(mp.find(a)!=mp.end()){
//     if(mp[a] == b)
// }
cout<<u<<" "<<v<<"\n";
}
// if(findPar(0) == findPar(1)) cout<<"yes";
cout<<"\n";
return res;
}
};
```