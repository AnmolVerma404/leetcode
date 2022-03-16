class Solution {
public:
    bool validateStackSequences(vector<int>& push, vector<int>& pop) {
        stack<int>st;
        int i = 0,j = 0;
        int n = pop.size(),top = 0;
        for(;i<n;i++){
            if(!st.empty()){
                top = st.top();
                while(top==pop[j] && !st.empty()){
                    st.pop();
                    j++;
                    if(!st.empty()){
                        top = st.top();
                    }
                }
            }
            st.push(push[i]);
            top = st.top();
            if(top==pop[j]){
                st.pop();
                j++;
            }
        }
        if(st.empty() && j == n) return true;
        if(i==n){
            while(!st.empty()){
                int top = st.top();
                if(top!=pop[j]) return false;
                j++;
                st.pop();
                if(j==n) break;
            }
        }
        return true;
    }
};