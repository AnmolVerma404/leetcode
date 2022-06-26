while(k>0 && c[i]==c[j]){
count++;
res.push_back(c[i]);
sum+=c[i];
++i;
--j;
--k;
}
if(k == 0) break;
if(c[i]>c[j]) j+=count;
else i-=count;
}else if(c[i]>c[j]){
res.push_back(c[i]);
sum+=c[i];
++i;
--k;
}else if(c[j]>c[i]){
res.push_back(c[j]);
sum+=c[j];
--j;
--k;
}
}
for(auto &it : res) cout<<it<<" ";
return sum;
}
};
```