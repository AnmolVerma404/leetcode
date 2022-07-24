class Solution {
public:
    bool bs(vector<int>&v,int t,int n){
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(v[mid] == t) return true;
            else if(v[mid] < t) low = mid+1;
            else high = mid-1;
        } 
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i = 0;i<n;++i){
            if(bs(matrix[i],target,m)) return true;
        }
        return false;
    }
};