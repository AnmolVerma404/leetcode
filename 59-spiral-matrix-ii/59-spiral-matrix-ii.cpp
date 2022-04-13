class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n,0));
        int c = 1;
        int left = 0, right = n-1, top = 0, bottom = n-1;
        while(left<=right && top<=bottom){
            for(int i = left;i<=right;i++){
                v[top][i] = c++;
            }
            top++;
            for(int i = top;i<=bottom;i++){
                v[i][right] = c++;
            }
            right--;
            for(int i = right;i>=left;i--){
                v[bottom][i] = c++;
            }
            bottom--;
            for(int i = bottom;i>=top;i--){
                v[i][left] = c++;
            }
            left++;
        }
        return v;
    }
};