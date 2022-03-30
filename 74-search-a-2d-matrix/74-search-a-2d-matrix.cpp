class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int r = 0,c = 0;
        for(int i = 0;i<v.size();i++){
            if(t>=v[i][0]&&t<=v[i][v[i].size()-1]){
                r = i;
                c = v[i].size();
                break;
            }
        }
        // cout<<r<<" "<<c;
        bool ans = false;
        for(int i = 0 ; i<v[r].size();i++){
            if(v[r][i]==t){
                ans = true;
            }
        }
        return ans;
    }
};