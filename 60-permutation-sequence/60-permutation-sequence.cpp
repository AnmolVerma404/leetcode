class Solution {
public:
    void solve(vector<string>&res,vector<bool>&visited,string& s,string& temp,int n){
        if(temp.size() == n){
            res.push_back(temp);
            return;
        }
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                visited[i] = true;
                temp+=s[i];
                solve(res,visited,s,temp,n);
                temp.pop_back();
                visited[i] = false;
            }
        }
    }
    string getPermutation(int n, int k) {
        string s = "";
        for(char i = '1';i<=(n+'0');++i){
            s+=i;
        }
        vector<string>res;
        vector<bool>visited(n,false);
        string temp = "";
        solve(res,visited,s,temp,n);
        return res[k-1];
    }
};