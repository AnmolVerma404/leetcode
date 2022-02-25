class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int res=0;
        for(char i : s)mp[i]++;
        priority_queue<int>pq;
        for(auto i : mp) pq.push(i.second);
        bool odd = true;
        while(!pq.empty()){
            int top = pq.top();
            // cout<<top<<" ";
            pq.pop();
            if(top%2!=0 && odd){
                res+=top;
                odd = false;
            }else if(top%2==0){
                res+=top;
            }else{
                res+=top-1;
            }
        }
        return res;
    }
};