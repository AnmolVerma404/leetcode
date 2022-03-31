class Solution {
    public static boolean isPossible(int[] nums,int mid,int m){
        int subArr = 1;
        int sum = 0;
        for(int i = 0;i<nums.length;i++){
            sum+=nums[i];
            if(sum>mid){
                subArr++;
                sum = nums[i];
            }
        }
        return subArr<=m;
    }
    public int splitArray(int[] nums, int m) {
        int sum = 0, mx = 0;
        for(int i : nums){
            sum+=i;
            mx = Math.max(mx,i);
        }
        int low = mx;
        int high = sum;
        int ans = 0;
        while(low<=high){
            int mid = (low + high)/2;
            if(isPossible(nums,mid,m)==true){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
}