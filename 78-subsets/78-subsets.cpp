class Solution {
    void backTrack(vector<int>&subset,int i,vector<int>&v,vector<vector<int>>&res){
        if(v.size()==i){
            res.push_back(subset);
            return;
        } 
        backTrack(subset,i+1,v,res);
        subset.push_back(v[i]);
        backTrack(subset,i+1,v,res);
        subset.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& v) {
        vector<vector<int>>res;
        vector<int>subset;
        backTrack(subset,0,v,res);
        return res;
    }
};