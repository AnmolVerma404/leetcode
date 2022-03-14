class Solution {
public:
    string simplifyPath(string s){
        stack<string>st;
        string res;
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(s[i]=='/') continue;
            string temp;
            while(i<n && s[i]!='/'){
                temp+=s[i++];
            }
            if(temp==".") continue;
            else if(temp==".."){
                if(!st.empty()) st.pop();
            }else{
                st.push(temp);
            }
        }
        while(!st.empty()){
            res = '/' + st.top() + res;
            st.pop();
        }
        if(res.size()==0) return "/";
        return res;
    }
};