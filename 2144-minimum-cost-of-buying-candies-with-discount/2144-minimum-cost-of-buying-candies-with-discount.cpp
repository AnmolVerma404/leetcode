class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int res = 0;
        priority_queue<int>pq;
        for(auto i : cost)pq.push(i);
        while(!pq.empty()){
            res+=pq.top();
            pq.pop();
            if(pq.empty())break;
            res+=pq.top();
            pq.pop();
            if(pq.empty())break;
            pq.pop();
        }
        if(!pq.empty())res+=pq.top();
        return res;
    }
};