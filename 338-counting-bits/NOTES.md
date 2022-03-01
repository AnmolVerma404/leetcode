```
class Solution {
public:
vector<int> countBits(int n) {
vector<int>res(n+1);
for(int i = 0;i<=n;i++){
cout<<__builtin_popcount(i);
cout<<__builtin_popcount(stoi(bitset<64>(i).to_string()))<<"\n";
res[i]=__builtin_popcount(stoi(bitset<64>(i).to_string()));
}
return res;
}
};
```