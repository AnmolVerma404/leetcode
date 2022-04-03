class Solution {
public:
    bool isPowerOfThree(int n) {
        double res = n;
        while(res>0){
            if(res==1){
                return true;
            }
            res/=3;
        }
        return false;
    }
};