class Solution {
public:
    int majorityElement(vector<int>& v) {
        unordered_map<int,int>mp;
        for(auto i : v) mp[i]++;
        int res = 0,mx = INT_MIN;
        for(auto i : mp) {
            if(mx<i.second){
                mx = i.second;
                res = i.first;
            }
        }
        return res;
    }
};