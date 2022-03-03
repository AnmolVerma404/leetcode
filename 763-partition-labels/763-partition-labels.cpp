class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        vector<int>ans;
        if(!s.size()) return ans;
        for(int i = 0;i<s.size();i++){
            mp[s[i]] = i;
        }
        int mxIdx = 0,lastIdx = 0;
        for(int i = 0;i<s.size();i++){
            mxIdx = max(mxIdx,mp[s[i]]);
            if(i==mxIdx){
                ans.push_back(mxIdx - lastIdx + 1);
                lastIdx = i+1;
            }
        }
        return ans;
    }
};