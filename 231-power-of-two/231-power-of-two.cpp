class Solution {
public:
    bool isPowerOfTwo(int n) {
        double res = 0,t = n;
        while(t!=1){
            t/=2;
            // cout<<t<<" ";
            res++;
            if(t<1){
                return false;
            }
        }
        return true;
    }
};
/*
16/2 = 8
8/2 = 4
4/2 = 2
2/2 = 1 end

*/