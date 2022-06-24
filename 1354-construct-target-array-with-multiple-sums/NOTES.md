// if(pqt.size() == 1){
//     if(pqt.top() > sum) return false;
// }
if(topv == topt){
pqt.pop();
continue;
}
if(sum>topt) return false;
pqv.pop();
int temp = topv;
pqv.push(sum);
if(topt == sum) pqt.pop();
sum = 2*sum - temp;
}
return true;
}
};
```