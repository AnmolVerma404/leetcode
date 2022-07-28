class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>mp;
        for(auto &it : t) mp[it]++;
        for(auto &it : s){
            if(mp.find(it)!=mp.end() && mp[it]>0){
                mp[it]--;
            }else{
                return false;
            }
        }
        return true;
    }
};