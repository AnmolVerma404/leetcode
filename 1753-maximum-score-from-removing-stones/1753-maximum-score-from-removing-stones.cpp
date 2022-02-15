class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int res = 0;
        while(!pq.empty()){
            auto a = pq.top();
            pq.pop();
            if(pq.empty()) return res;
            auto b = pq.top();
            pq.pop();
            res++;
            a--;
            b--;
            if(a>0)pq.push(a);
            if(b>0)pq.push(b);
        }
        return res;
    }
};