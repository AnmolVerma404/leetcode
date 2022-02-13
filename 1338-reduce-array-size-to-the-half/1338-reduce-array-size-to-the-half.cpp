class Solution {
public:
    int minSetSize(vector<int>& v) {
        int n = v.size();
        unordered_map<int,int>mp;
        for(auto i : v) mp[i]++;
        priority_queue<int>pq;
        for(auto i : mp) pq.push(i.second);
        int sum = 0,i=0;
        while(!pq.empty()){
            // cout<<pq.top()<<" ";
            sum+=pq.top();
            i++;
            if(sum>=n/2) return i;
            pq.pop();
        }
        return 0;
    }
};