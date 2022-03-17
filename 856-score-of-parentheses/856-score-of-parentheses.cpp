class Solution {
public:
    int scoreOfParentheses(string s) {
        int res = 0;
        stack<int>st;
        int n = s.size();
        int c1 = 0,c2 = 0,c3 = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='('){
                st.push(res);
                res = 0;
            }else{
                res = st.top() + max(2*res,1);//if res = 0, res = 1, else res = 2*res(prev)
                st.pop();
            }
        }
        return res;
    }
};