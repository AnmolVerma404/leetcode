```
class MyHashSet {
vector<int>v;
public MyHashSet() {
}
public void add(int key) {
v.push_back(key);
}
public void remove(int key) {
//         for(auto i : v){
//             if(i == key){
//             }
//         }
for(auto it = v.begin();it!=v.end();it++){
if(*it == key){
v.erase(it);
}
}
}
public boolean contains(int key) {
for(auto i : v) if( i == key) return true;
return false;
}
}
​
/**
* Your MyHashSet object will be instantiated and called as such:
* MyHashSet obj = new MyHashSet();
* obj.add(key);
* obj.remove(key);
* boolean param_3 = obj.contains(key);
*/
```