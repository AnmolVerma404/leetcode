class Solution {
public:
    bool carPooling(vector<vector<int>>& v, int c) {
        map<int,int>mp;
        for(auto it : v){
            int start = it[1];
            int end = it[2];
            mp[start]+=it[0];
            mp[end]-=it[0];
        }
        int sum = 0;
        for(auto it : mp){
            sum+=it.second;
            if(sum>c) return false;
        }
        return true;
    }
};