```
class Solution {
public:
vector<int> intersection(vector<int>& v1, vector<int>& v2) {
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
unordered_map<int,int>mp;
for(int i = 0;i<v1.size();i++){
int target = v1[i];
int low = 0, high = v2.size() - 1;
while(low <= high){
int mid = low + (high - low) / 2;
if(v2[mid] == target){
mp[i]++;
}else if(v2[mid]< target){
low = mid + 1;
}else{
high = mid - 1;
}
}
}
vector<int>res;
for(auto i : mp){
res.push_back(i.first);
}
return res;
}
};
```