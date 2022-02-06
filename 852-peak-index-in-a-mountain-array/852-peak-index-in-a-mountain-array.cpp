class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int low = 0, high = v.size() - 1;
        int i = 0;
        while(low<=high){
            int mid = low + (high - low )/ 2;
            if(v[mid] < v[mid + 1]){
                low = mid + 1;
            }else{
                 high = mid - 1;
            }
        }
        return low;
    }
};