class Solution {
public:
    void solve(vector<vector<string>>&res,vector<string>&path,string &s,int idx){
        if(idx == s.size()){
            res.push_back(path);
            return;
        }
        for(int i = idx;i<s.size();++i){
            if(isPossible(s,idx,i)){
                path.push_back(s.substr(idx,i - idx + 1));
                solve(res,path,s,i+1);
                path.pop_back();
            }
        }
    }
    bool isPossible(string &s,int l,int h){
        while(l<=h){
            if(s[l++]!=s[h--]) return false;
        }
        return true;
    }
    vector<vector<string>> partition(string &s) {
        vector<vector<string>>res;
        vector<string>path;
        solve(res,path,s,0);
        return res;
    }
};