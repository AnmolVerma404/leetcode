class Solution {
public:
    int largestSumAfterKNegations(vector<int>& v, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int sum = 0;
        int nc = 0;
        for(auto i : v){
            pq.push(i);
            sum+=i;
            if(i<0)nc++;
        }
        //Changing all -ve to +ve
        while(nc-- && k--){
            int top = pq.top();
            pq.pop();
            top = -top;
            sum = sum + (2*top);
            pq.push(top);
        }
        if(!k) return sum;
        if(k>0){
            int top = pq.top();
            pq.pop();
            int temp = top;
            top = top * pow(-1,k);
            if(temp==top) return sum;
            sum = sum + (top*2);
            pq.push(top);
        }
        return sum;
    }
};
/*
    -1 3 4 5 k = 2
*/