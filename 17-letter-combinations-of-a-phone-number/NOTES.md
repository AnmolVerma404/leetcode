```
class Solution {
public:
vector<string> letterCombinations(string digits) {
vector<string>s;
unordered_map<int,vector<char>(4,0)>mp;
int j = 'a' - 0;
char c = j + 0;
// cout<<c;
for(int i = 2;i<10;i++){
mp[i].push_back(j + 0);
j++;
mp[i].push_back(j + 0);
j++;
mp[i].push_back(j + 0);
j++;
if(i == 7 || i == 9){
mp[i].push_back(j + 0);
j++;
}
}
for(auto i : mp){
cout<<i.first<<" "<<i.second[0]<<" "<<i.second[1]<<" "<<i.second[2]<<" "<<i.second[3]<<"\n";
}
return s;
}
};
```