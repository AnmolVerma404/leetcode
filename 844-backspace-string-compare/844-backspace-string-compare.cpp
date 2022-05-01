class Solution {
public:
    string back(string s){
        int n = s.size();
        int c = 0;
        string sn;
//         for(int i = 0;i<n;i++){
//             if(s[i] == '#') c++;
//             else if(c == 0) sn+=s[i];
//             else{
//                 for(;i<=c && i<s.size();i++){
//                     if(s[i] == '#') c++;
//                     else{
                        
//                     }
//                 }
//                 i+=c;
//                 c = 0;
//                 if(s[i]=='#') c++;
//                 else if(i<s.size()) sn+=s[i];
//             }
//         }
//         return sn;
        for(int i = 0;i<n;i++){
            if(s[i] == '#') c++;
            else if(c!=0) c--;
            else{
                sn+=s[i];
            }
        }
        return sn;
    }
    bool backspaceCompare(string s, string t) {
        reverse(s.begin(),s.end());
        reverse(t.begin(),t.end());
        string sn = back(s);
        string tn = back(t);
        // cout<<sn<<" "<<tn<<"\n";
        return sn == tn;
    }
};