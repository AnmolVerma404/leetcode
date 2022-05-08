int n = 0, m = 0;
vector<NestedInteger> v;
NestedIterator(vector<NestedInteger> &nestedList) {
i = 0;
v = nestedList;
n = v.size();
}
int next() {
if(j == m){
return v[i++][j]
}
return v[i][j++]
}
bool hasNext() {
m = v[i].size();
if(v[i].size()>1 && i<n && j<m) return true;
return false;
}
};
​
/**
* Your NestedIterator object will be instantiated and called as such:
* NestedIterator i(nestedList);
* while (i.hasNext()) cout << i.next();
*/
```