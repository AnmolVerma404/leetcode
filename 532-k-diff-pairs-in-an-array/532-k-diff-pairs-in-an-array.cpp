class Solution {
public:
    int findPairs(vector<int>& v, int k) {
        int n = v.size(),c = 0;
        unordered_map<int,int>mp;
        for(auto i : v){
            mp[i]++;
        }
        for(auto i : mp){
            if(k==0){
                if(i.second>1){
                    c++;
                }
            }else if(mp.find(i.first+k)!=mp.end()){
                c++;
            }
        }
        return c;
    }
};