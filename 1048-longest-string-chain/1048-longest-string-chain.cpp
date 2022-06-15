class Solution {
    vector<vector<int>>g;
    vector<int>score;
public:
    int longest(int v){
        if(score[v]>0){
            return score[v];
        }
        score[v] = 1;
        for(int b : g[v]){
            score[v] = max(score[v],longest(b)+1);
        }
        return score[v];
    }
    int longestStrChain(vector<string>& w) {
        const int n = w.size();
        g.resize(n);
        score.resize(n);
        unordered_map<string,int>mp;
        for(int i = 0;i<n;i++){
            mp[w[i]] = i;
        }
        for(int i = 0;i<n;i++){
            string s = w[i];
            for(int j = 0;j<s.size();j++){
                string n = s.substr(0,j) + s.substr(j+1);
                auto it = mp.find(n);
                if(it == mp.end()){
                    continue;
                }
                g[it->second].push_back(i);
            }
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            ans = max(ans,longest(i));
        }
        return ans;
        
    }
};