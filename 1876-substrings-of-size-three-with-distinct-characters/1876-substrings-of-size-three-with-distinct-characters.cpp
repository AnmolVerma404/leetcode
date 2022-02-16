class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        int ans=0;
        char a = s[0], b = s[1], c = s[2];
        for(int i = 3;i<s.size();i++){
            if(a!=b && b!=c && a!=c)ans++;
            a = b;
            b = c;
            c = s[i];
        }
        if(a!=b && b!=c && a!=c)ans++;
        return ans;
    }
};