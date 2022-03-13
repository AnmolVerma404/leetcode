class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>st;
        for(int i = 0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }else{
                char stp = st.top();
                if(st.empty() || (stp=='(' && s[i]!=')')||(stp=='{' && s[i]!='}')||(stp=='[' && s[i]!=']')){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};