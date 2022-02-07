C++
```cpp
class Solution {
public:
string frequencySort(string s) {
unordered_map<char,int>mp;//Define a HashMap
priority_queue<pair<int,char>>pq;//Define a priority queue
for(auto i : s){
mp[i]++;//Insert all char of s in HashMap
}
for(auto i : mp){
pq.push(make_pair(i.second,i.first));//Push all Hash map value in priority queue occurence first, so they are sorted in decreasing order
}
string res;//Result String
while(!pq.empty()){
for(int i = 0;i<pq.top().first;i++){
res+=pq.top().second;//First is the occurence so add the Second to the result string
}
pq.pop();//Then pop the top of the priority queue
}
return res;//return the result
}
};
```