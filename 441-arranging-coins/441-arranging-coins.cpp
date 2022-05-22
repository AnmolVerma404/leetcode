class Solution {
public:
    int arrangeCoins(int n) {
        int res = 0;
       for(int i = 1;n>=0;i++){
           res++;
           n-=i;
       }
        return res-1;
    }
};