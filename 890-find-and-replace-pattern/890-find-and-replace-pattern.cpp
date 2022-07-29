class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
        int n = w.size();
        int m = p.size();
        vector<string>res;
        for(int i = 0;i<n;++i){
            string curr = w[i];
            unordered_map<char,char>mp;
            unordered_map<char,char>mpRev;
            bool flag = true;
            for(int j = 0;j<m;++j){
                if(mp.find(p[j])!=mp.end()){
                    char ch = mp[p[j]];
                    if(ch!=curr[j]){
                        flag = false;
                        break;
                    }
                    continue;
                }
                if(mpRev.find(curr[j])!=mpRev.end()){
                    char ch = mpRev[curr[j]];
                    if(ch!=p[j]){
                        flag = false;
                        break;
                    }
                    continue;
                }
                mp[p[j]] = curr[j];
                mpRev[curr[j]] = p[j];
            }
            if(flag){
                res.push_back(curr);
            }
        }
        return res;
    }
};