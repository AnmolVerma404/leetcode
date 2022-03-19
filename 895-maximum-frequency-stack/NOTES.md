```
class FreqStack {
public:
unordered_map<int,int>mp;
stack<int>st;
FreqStack() {
}
void push(int val) {
st.push(val);
mp[val]++;
}
int pop() {
int mx = INT_MIN;
int mxVal = 0;
for(auto i : mp){
if(mx<i.second){
mx = i.second;
}
}
stack<int>temp;
while(true){
int top = st.top();
st.pop();
if(mp[top]==mx){
mxVal = top;
mp[top]--;
break;
};
temp.push(top);
}
while(!temp.empty()){
st.push(temp.top());
temp.pop();
}
return mxVal;
}
};
​
/**
* Your FreqStack object will be instantiated and called as such:
* FreqStack* obj = new FreqStack();
* obj->push(val);
* int param_2 = obj->pop();
*/
```