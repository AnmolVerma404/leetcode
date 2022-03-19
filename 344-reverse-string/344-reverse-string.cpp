class Solution {
    void rec(vector<char> & s,int start, int end){
        if(start>=end) return;
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        rec(s,start+1,end-1);
    }
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        rec(s,0,n-1);
        return;
    }
};