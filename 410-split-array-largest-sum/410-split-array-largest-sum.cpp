class Solution {
public:
    bool isPossible(vector<int>nums,int mid, int m){
        int subArr = 1;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            if(sum>mid){
                subArr++;
                sum = nums[i];
            }
        }
        return subArr<=m;
    }
    int splitArray(vector<int>& nums, int m) {
        int mx = 0, sum = 0;
        for(auto i : nums){
            sum+=i;
            mx = max(mx,i);
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
};