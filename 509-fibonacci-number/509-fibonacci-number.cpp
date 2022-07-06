class Solution {
public:
    int fib(int n) {
        int prev2 = 0;
        int prev1 = 1;
        if(n<=1) return n;
        n--;
        while(n--){
            int curr = prev2 + prev1;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};