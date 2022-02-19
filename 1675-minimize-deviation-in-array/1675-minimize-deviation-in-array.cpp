class Solution {
public:
    int minimumDeviation(vector<int>& v) {
        int n = v.size();
        int mx = INT_MIN, mn = INT_MAX;
        for(int i = 0 ; i < n;i++){
            if(v[i]%2!=0){
                v[i]*=2;
            }
            mx = max(mx,v[i]);
            mn = min(mn,v[i]);
        }
        int minDiv = mx-mn;
        priority_queue<int>pq;
        for(auto i : v) pq.push(i);
        while(pq.top()%2==0){
            int top = pq.top();
            pq.pop();
            minDiv = min(minDiv,top-mn);
            cout<<top<<" ";
            top/=2;
            cout<<top<<"\n";
            mn = min(mn,top);
            pq.push(top);
        }
        minDiv = min(minDiv,pq.top()-mn);
        return minDiv;
    }
};
/*
As we have multiplied the odd ones with 2, there for we will get all the even element in the top of the priority queue
Therefor we will run a while loop until we found odd, currently all element in the pq are even
That odd we will get as-
    We will pop the top of pq, first we will find the difference and store it in minDiv and as it's even we will divide it by 2 and recal the mn and push the element again in pq, here is how we will get odd number in pq
*/