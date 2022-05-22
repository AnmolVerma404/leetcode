class Solution {
public:
    int arrangeCoins(int n) {
        int l = 0, h = n;
        while(l<=h){
            long mid = (l + h)/2;
            long temp = mid*(mid+1)/2;
            if(temp == n) return mid;
            else if(temp < n) l = mid + 1;
            else h = mid - 1;
        }
        return l-1;
    }
};