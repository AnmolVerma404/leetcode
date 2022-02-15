class Solution {
    public int maximumScore(int a, int b, int c) {
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>((x, y) -> y - x);
        pq.add(a);
        pq.add(b);
        pq.add(c);
        int res = 0;
        while(pq.size()>1){
            int p = pq.remove();
            int q = pq.remove();
            res++;
            p--;
            q--;
            if(p>0) pq.add(p);
            if(q>0) pq.add(q);
        }
        return res;
    }
}