if(j==tsqr){
j = 0;
tsqr*=2;
i++;
}
q.pop();
if(t->left!=NULL){
q.push(t->left);
}else{
j++;
}
if(t->right!=NULL){
q.push(t->right);
}else{
j++;
}
}
for(int i = 0;i<v.size();i++){
cout<<v[i]<<" ";
if(v[i]>mx){
mx = v[i];
res = i;
}
}
return res;
}
};
```