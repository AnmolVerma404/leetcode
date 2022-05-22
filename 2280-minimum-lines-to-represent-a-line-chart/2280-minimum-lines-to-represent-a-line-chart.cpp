class Solution {
public:
    int minimumLines(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        int n = v.size();
        if(n == 1) return 0;
        vector<long>s;
        int res = 1;
        for(int i = 2;i<n;i++){
            long x1 = v[i][0],x2 = v[i-1][0],x3 = v[i-2][0];
            long y1 = v[i][1],y2 = v[i-1][1],y3 = v[i-2][1];
            long diff1 = (y3-y2) * (x2-x1);
            long diff2 = (y2-y1) * (x3-x2);
            if(diff1 != diff2)
                res++;
        }
        return res;
    }
};