```
class Solution {
public:
int brokenCalc(int s, int t) {
int res = 0;
if(t<s){
int temp = t;
t = s;
s = t;
}
while(s!=t){
int c = s*2;
if(c<t){
s=c;
res++;
continue;
}else if(c>t){
s--;
if(s*2<t){
s = c;
}
}
}
return res;
}
};a
```