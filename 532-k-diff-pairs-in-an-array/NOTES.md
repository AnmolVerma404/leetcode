class Solution {
public:
int findPairs(vector<int>& ans, int k) {
​
int count=0;
​
sort(ans.begin(),ans.end());
​
for(int i=0;i<ans.size();i++){
​
if(i>0 && ans[i]==ans[i-1])continue;
​
for(int j=i+1;j<ans.size();j++){
​
if(j>i+1 && ans[j]==ans[j-1])continue;
​
if(abs(ans[i]-ans[j])==k){
​
count++;
}
}
}
return count;
​
}
};