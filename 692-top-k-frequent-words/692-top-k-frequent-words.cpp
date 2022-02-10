class Solution {
     struct Comp {
        bool operator()(const pair<int, string>& lhs, const pair<int, string>& rhs) const {
            if (lhs.first != rhs.first)
                return lhs.first < rhs.first;
            return lhs.second > rhs.second;
        }
      };
public:
    vector<string> topKFrequent(vector<string>& v, int k) {
        unordered_map<string,int>mp; priority_queue<pair<int,string>,vector<pair<int,string>>,Comp>pq;
        vector<string>res;
        for(auto s : v){
            mp[s]++;
        }
        for(auto i : mp){
            pq.push({i.second,i.first});
        }
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};