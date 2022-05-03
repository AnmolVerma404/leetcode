class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int n = nums.length;
        int start = -1, end = n;
        int mn = Integer.MAX_VALUE;
        for(int i = n-1;i>=0;i--){
            if(mn > nums[i]) mn = nums[i];
            if(nums[i]>mn) start = i;
        }
        if(start == -1) return 0;
        int mx = -Integer.MAX_VALUE;
        for(int i = 0;i<n;i++){
            if(mx < nums[i]) mx = nums[i];
            if(nums[i]<mx) end = i;
        }
        return end - start + 1;
    }
}
