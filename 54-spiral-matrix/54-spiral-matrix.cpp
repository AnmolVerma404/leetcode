class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        vector<int>res;
        int n = v.size();
        int m = v[0].size();
        
        int top = 0, right = m-1,bottom = n-1,left = 0;
        int d = 1;
        while(left<=right && top<=bottom){
            if(d == 1){
                for(int i = left;i<=right;++i) res.push_back(v[top][i]);
                d = 2;
                top++;
            }
            else if(d == 2){
                for(int i = top;i<=bottom;++i) res.push_back(v[i][right]);
                d = 3;
                right--;
            }
            else if(d == 3){
                for(int i = right;i>=left;--i) res.push_back(v[bottom][i]);
                d = 4;
                bottom--;
            }
            else if(d == 4){
                for(int i = bottom;i>=top;--i) res.push_back(v[i][left]);
                d = 1;
                left++;
            }
        }
        return res;
    }
};