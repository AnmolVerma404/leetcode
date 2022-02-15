class Solution {
public:
    int singleNumber(vector<int>& v) {
        unordered_map<int,int>mp;
        for(auto i : v){
            mp[i]++;
        }
        for(auto i : mp){
            if(i.second==1) return i.first;
        }
        return 0;
    }
};