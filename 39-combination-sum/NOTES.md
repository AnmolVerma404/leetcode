if(sum+v[i]<t){
if(sum && mp.find(t%sum)!=mp.end()){
cout<<t%sum<<" ";
temp.push_back(t%sum);
sum+=t%sum;
found = true;
}else{
temp.push_back(v[i]);
sum+=v[i];
}
}else if(sum==t){
break;
}else{
break;
}
}
if(found){
res.push_back(temp);
}
// cout<<t-sum;
}
}
return res;
}
};
```