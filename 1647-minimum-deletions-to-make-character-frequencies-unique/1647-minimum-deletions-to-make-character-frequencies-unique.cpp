class Solution {
public:
    int minDeletions(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        unordered_map<char,int>mp;
        unordered_set<int>set;
        int c = 0;
        for(auto &it : s) mp[it]++;
        for(auto &it : mp){
            while(set.find(it.second)!=set.end()){
                it.second--;
                c++;
                if(it.second == 0) break;
            }
            if(it.second>0 && set.find(it.second) == set.end()) set.insert(it.second);
        }
        return c;
    }
};