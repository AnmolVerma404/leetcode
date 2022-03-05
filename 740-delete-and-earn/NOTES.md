// res[i].second.first-=res[i].first;
for(int j = 0;j<m;j++){
if(res[i].first==res[j].first+1){
res[j].second.second = false;
}
if(res[i].first==res[j].first-1){
res[j].second.second = false;
}
}
// if(res[i].second.first==0){
i++;
// res[i].second.second = false;
// }
}
if(res[m-1].first==1) {
// cout<<"yes";
r = max(r,r + tempO);
// r-=
}
// cout<<m;
// for(int i = 0;i<m;i++){
//     cout<<res[i].first<<" "<<res[i].second.first<<" "<<res[i].second.second<<"\n";
// }
return r;
}
};
```