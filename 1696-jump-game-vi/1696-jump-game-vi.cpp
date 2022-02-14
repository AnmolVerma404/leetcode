#define pi pair<int,int>
class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        priority_queue<pi>pq;
        int c = nums[0];
        pq.push({nums[0],0});
        for(int i = 1;i<nums.size();i++){
            while(i-pq.top().second>k)pq.pop();
            c = nums[i] + pq.top().first;
            pq.push({c,i});
        }
        return c;
    }
};