class Solution {
public:
    string removeDuplicateLetters(string s) {
        string res;
        vector<int>lo(26);
        bool add[26]={};
        int n = s.size();
        for(int i = 0;i<n;i++){
            lo[s[i]-'a'] = i;
        }
        for(int i = 0;i<n;i++){
            if (add[s[i] - 'a']) continue;
            while(!res.empty() && res.back()>s[i] && lo[res.back()-'a']>i){
                add[res.back()-'a'] = false;
                res.pop_back();
            }
            res.push_back(s[i]);
            add[s[i]-'a'] = true;
        }
        return res;
    }
};