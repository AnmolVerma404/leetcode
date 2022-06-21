class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        int n = h.size(),diff = 0,i = 0;
        priority_queue<int>pq;
        for(i = 0;i<n-1;i++){
            diff = h[i+1]-h[i];
            if(diff<=0) continue;
            b-=diff;
            pq.push(diff);
            if(b<0){
                b+=pq.top();
                pq.pop();
                l--;
            }
            if(l < 0) break;
        }
        return i;
    }
};