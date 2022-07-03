class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return n;
        int u = 1, d = 1;
        for(int i = 1;i<n;++i){
            if(nums[i]<nums[i-1]) d = u + 1;
            else if(nums[i]>nums[i-1]) u = d + 1;
        }
        return max(u,d);
    }
};