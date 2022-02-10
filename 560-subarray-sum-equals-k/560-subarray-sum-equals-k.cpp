class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
        int c = 0, s=0;
        unordered_map<int,int>mp = {{0,1}};
        for(auto i : v){
            s+=i;
            c+=mp[s-k];
            mp[s]++;
        }
        return c;
    }
};