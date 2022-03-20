class Solution {
    int diff(vector<int>&t,vector<int>&b,int num){
        int c = 0,d = 0;
        for(int i = 0;i<t.size();i++){
            if(t[i]!=num && b[i]!=num) return -1;
            if(t[i]!=num) c++;
            if(b[i]!=num) d++;
        }
        return min(c,d);
    }
public:
    int minDominoRotations(vector<int>& t, vector<int>& b) {
        int a = diff(t,b,t[0]);
        int d = diff(t,b,b[0]);
        return min(a,d)>0?min(a,d):max(a,d);
    }
};