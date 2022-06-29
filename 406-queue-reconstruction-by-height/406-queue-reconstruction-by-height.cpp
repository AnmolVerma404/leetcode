class Solution {
public:
    static bool cmd(vector<int>&a,vector<int>&b){
        if(a[0] == b[0]) return a[1] < b[1];
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        int n = p.size();
        sort(p.begin(),p.end(),cmd);
        vector<vector<int>>res;
        for(int i = 0;i<n;++i){
            int j = p[i][1];
            res.insert(res.begin() + j,p[i]);
        }
        return res;
    }
};