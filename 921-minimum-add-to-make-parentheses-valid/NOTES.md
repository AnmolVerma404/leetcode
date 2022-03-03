```
class Solution {
public:
int minAddToMakeValid(string s) {
int n = s.size();
if(n==0) return 0;
if(n==1) return 1;
stack<char>st;
for(auto c : s) st.push(c);
int res = 0,o = 0,c = 0;
while(!st.empty()){
char top = st.top();
if(top=='('){
o++;
c--;
}else{
if(o==0){
o++;
}else{
c++;
o--;
}
}
st.pop();
}
return abs(res);
}
};
```