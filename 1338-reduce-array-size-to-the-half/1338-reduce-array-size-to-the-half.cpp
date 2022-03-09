class Solution {
public:
    int minSetSize(vector<int>& v) {
        int n = v.size();
        unordered_map<int,int>mp;
        for(auto i : v)mp[i]++;
        priority_queue<int>pq;
        for(auto i : mp) pq.push(i.second);
        set<int,int>st;
        int res = 0,i = 0;
        while(!pq.empty()){
            res+=pq.top();
            i++;
            if(res>=n/2) return i;
            pq.pop();
        }
        return 0;
    }
};