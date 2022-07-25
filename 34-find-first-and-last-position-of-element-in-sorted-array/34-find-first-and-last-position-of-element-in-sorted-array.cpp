class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        int n = nums.size();
        if(n == 0) return {-1,-1};
        if(n == 1 && nums[0] == target) return {0,0};
        for(int i = 0;i<n-1;++i){
            if(nums[i] == target && !res.size()){
                res.push_back(i);
            }else if(nums[i] == target && nums[i]!=nums[i+1]){
                res.push_back(i);
            }
            if(nums[i] == target && nums[i]==nums[i+1] && (i+1 == n-1)){
                res.push_back(i+1);
            }
        }
        int m = res.size();
        if(!m && nums[n-1] == target) return  {n-1,n-1};
        if(m == 1) res.push_back(res[0]);
        m++;
        if(!res.size()) return {-1,-1};
        return res;
    }
};