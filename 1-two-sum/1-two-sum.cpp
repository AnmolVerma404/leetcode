class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int n = v.size();
        unordered_map<int,int>mp;
        for(int i = 0;i<n;++i){
            if(mp.count(t-v[i])){
                return {i,mp[t-v[i]]};
            }
           mp[v[i]] = i;
        }
        return {-1,-1};
    }
};