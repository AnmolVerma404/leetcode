```
class Solution {
public int findUnsortedSubarray(int[] nums) {
int start = -1;
int end = -1;
int n = nums.length;
int i = 0, j = n-1;
while(i<j){
if(nums[i]>nums[i+1] && start == -1){
start = i;
}else{
i++;
}
if(nums[j]<nums[j-1] && end == -1){
end = j;
}else{
j--;
}
}
if(start == -1 && end == -1) return 0;
System.out.print(start + " " + end + "\n");
if(end == n-1) return n;
return end - start + 1;
}
}
```