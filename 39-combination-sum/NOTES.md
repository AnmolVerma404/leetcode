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
Solved Using **BackTracking**
EXPLANATION
​
```
1. Sort the vector(non-decreasing).
2. First remove all the duplicates from vector.
3. Then use recursion and backtracking to solve
the problem.
(A) If at any time sub-problem sum == 0 then
add that vector to the result (vector of
vectors).
(B) Else if sum is negative then ignore that
sub-problem.
(C) Else insert the present index in that
vector to the current vector and call
the function with sum = sum-ar[index] and
index = index, then pop that element from
current index (backtrack) and call the
function with sum = sum and index = index+1
```