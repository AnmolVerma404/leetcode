class Solution {
public:
    int titleToNumber(string s) {
        unordered_map<char,int>mp;
        int i = 0,n = s.size();
        long long int res = 0;
        for(char c = 'A';c<='Z';c++){
            mp.insert({c,++i});
        }
        // for(auto i : mp){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        if(n==1) return mp[s[0]];
        for(int i = 0;i<n;i++){
            res= 26 * res + mp[s[i]];
            // cout<<mp[s[i]]<<" ";
        }
        return res;
    }
};