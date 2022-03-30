class Solution {
    public boolean searchMatrix(int[][] m, int t) {
        int r = m.length;
        int c = m[0].length;
        int start = 0,end = r*c-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            int val = m[mid/c][mid%c];
            if(val == t) return true;
            else if(val<t) start = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
}