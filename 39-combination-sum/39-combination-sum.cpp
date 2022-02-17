class Solution {
    void backTrack(vector<int>&v,vector<vector<int>>&res,vector<int>&temp,int t,int i){
        if(t==0){
            res.push_back(temp);
            return;
        }
        while(i<v.size() && t-v[i]>=0){
            temp.push_back(v[i]);
            backTrack(v,res,temp,t-v[i],i);
            ++i;
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& v, int t) {
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        vector<vector<int>>res;
        vector<int>temp;
        backTrack(v,res,temp,t,0);
        return res;
    }
};