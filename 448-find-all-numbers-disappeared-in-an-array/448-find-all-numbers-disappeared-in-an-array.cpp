class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        int n = v.size();
        unordered_map<int,int>mp;
        vector<int>res;
        for(auto &it : v) mp[it]++;
        for(int i = 1;i<=n;++i){
            if(mp.find(i)==mp.end()) res.push_back(i);
        }
        return res;
    }
};