class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        if(n==0) return 0;
        if(n==1) return 1;
        stack<char>st;
        int res = 0;
        for(int i = 0;i<n;i++){
            if(s[i]==')'){
                if(st.empty())res++;
                else if(st.top()=='(')st.pop();
                else st.push(s[i]);
            }else{
                st.push(s[i]);
            }
        }
        return st.size() + res;
    }
};