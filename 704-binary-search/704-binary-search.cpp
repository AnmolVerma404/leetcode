class Solution {
public:
    int search(vector<int>& v, int t) {
        int start = 0, end = v.size()-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(v[mid]==t) return mid;
            else if(v[mid]>t) end = mid - 1;
            else if(v[mid]<t) start = mid + 1;
        }
        return -1;
    }
};