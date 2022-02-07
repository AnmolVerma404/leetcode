class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        for(auto i : s){
            mp[i]++;
        }
        for(auto i : mp){
            pq.push(make_pair(i.second,i.first));
        }
        string res;
        while(!pq.empty()){
            for(int i = 0;i<pq.top().first;i++){
                res+=pq.top().second;
            }
            pq.pop();
        }
        return res;
    }
};