1st
```cpp
class Solution {
public:
int removeDuplicates(vector<int>& nums) {
int i = 0;
for(auto n : nums)
if(i<2 || n > nums[i-2])
nums[i++] = n;
return i;
}
};
```
2nd
```c++
class Solution {
public:
int removeDuplicates(vector<int>& nums) {
int n = nums.size();
if(n<3) return n;
int slow = 2, fast = 2;
while(fast<n){
if(nums[fast]!=nums[slow-2]){
nums[slow++] = nums[fast];
}
fast++;
}
return slow;
}
};
```