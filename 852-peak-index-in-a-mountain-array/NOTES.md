Brute Force -
```
class Solution {
public:
int peakIndexInMountainArray(vector<int>& arr) {
for(int i = 1;i<arr.size()-1;i++){
if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
return i;
}
}
return -1;
}
};
```
Binary Search
```cpp
class Solution {
public:
int peakIndexInMountainArray(vector<int>& v) {
int low = 0, high = v.size() - 1;
int i = 0;
while(low<=high){
int mid = low + (high - low )/ 2;
if(v[mid] < v[mid + 1]){
low = low + 1;
}else{
high = mid - 1;
}
}
return low;
}
};
```