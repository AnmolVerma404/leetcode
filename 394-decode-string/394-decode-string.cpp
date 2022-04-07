class Solution {
public:
    string decodeString(string s) {
        int n = s.size();
        stack<int>count;
        stack<string>result;
        string str = "";
        int i = 0;
        while(i<n){
            if(isdigit(s[i])){
                int c = 0;
                while(isdigit(s[i])){
                    c = c*10 + (s[i]-'0');
                    i++;
                }
                count.push(c);
            }else if(s[i] == '['){
                result.push(str);
                str="";
                i++;
            }else if(s[i] == ']'){
                string temp = result.top();
                result.pop();
                int c = count.top();
                count.pop();
                for(int i = 0;i<c;i++){
                    temp+=str;
                }
                str = temp;
                i++;
            }else{
                str+= s[i];
                i++;
            }
        }
        return str;
    }
};