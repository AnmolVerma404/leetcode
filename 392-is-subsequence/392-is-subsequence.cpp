class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0,j=0;
        int n = s.size(),m = t.size();
        if(n>m) return false;
        if(s==t) return true;
        for(;i<m;){
            if(s[j]==t[i]){
                // cout<<"Y";
                j++;
                // if(j==n-1) return true;
            }
            i++;
        }
        if(j!=n) return false;
        return true;
    }
};