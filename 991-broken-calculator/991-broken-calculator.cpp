class Solution {
public:
    int brokenCalc(int s, int t) {
        int res = 0;
        while(t>s){
            if(t%2)t++;
            else t/=2;
            res++;
        }
        return res + s - t;
    }
};