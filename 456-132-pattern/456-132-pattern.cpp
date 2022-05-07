class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        //132 - ikj
        int n = nums.size();
        if(n == 0) return false;
        vector<int>minVal(n);
        minVal[0] = nums[0];
        stack<int>st;
        //Calculate i val
        for(int i = 1;i<n;i++){
            minVal[i] = min(minVal[i-1],nums[i]);
        }
        for(int j = n-1;j>0;j--){
            while(!st.empty() && nums[st.top()]<nums[j]){
                if(nums[st.top()]>minVal[j-1]){
                    return true;
                }
                st.pop();
            }
            st.push(j);
        }
        return false;
    }
};