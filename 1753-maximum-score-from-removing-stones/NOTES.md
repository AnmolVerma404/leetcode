if(q>0)pq.push(q);
}
return res;//Finally return score
}
};
```
### **Java**
```java
class Solution {
public int maximumScore(int a, int b, int c) {
PriorityQueue<Integer> pq = new PriorityQueue<Integer>((x, y) -> y - x);// Define a Max Heap
pq.add(a);// Add a,b, and c in it
pq.add(b);
pq.add(c);
int res = 0;// result/score
while(pq.size()>1){
int p = pq.remove();//Current largest
int q = pq.remove();//Second Largest
res++;//Increment result
p--;//Decrement p and q
q--;
if(p>0) pq.add(p);//If p and q are not zero, add them in max heap again
if(q>0) pq.add(q);
}
return res;//Finally return score
}
}
```