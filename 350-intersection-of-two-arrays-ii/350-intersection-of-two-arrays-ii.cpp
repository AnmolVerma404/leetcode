class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        unordered_map<int,int>mp1,mp2;
        vector<int>res;
        for(auto i : a) mp1[i]++;
        for(auto i : b) mp2[i]++;
        for(auto i : mp1){ 
            if(mp2.find(i.first)!=mp2.end()){
                for(int j = 0;j<min(i.second,mp2[i.first]);j++){
                    res.push_back(i.first);
                }
            }
        }
        return res;
    }
};