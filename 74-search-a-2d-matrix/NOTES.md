```
class Solution {
public boolean searchMatrix(int[][] m, int t) {
int r = 0,n = m.length;
for(int i = 0;i<n;i++){
if(m[i][0]<=t && m[i][n-1]>=t){
r = i;
break;
}
}
int low = 0, high = n-1;
while(low<=high){
int mid = low + (high-low)/2;
if(m[r][mid]==t) return true;
else if(m[r][mid]>=t) low = mid + 1;
else high = mid - 1;
}
return false;
}
}
```