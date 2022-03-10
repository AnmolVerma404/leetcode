class Solution {
public:
    int findKthPositive(vector<int>& v, int k) {
        if(v[0]>k) return k;
        int low = 0, high = v.size();
        while(low<high){
            int mid = low + (high-low)/2;
            if(v[mid]-mid-1<k)low = mid+1;
            else high = mid;
        }
        return low + k;
    }
};