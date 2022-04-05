class Solution {
public:
    int maxArea(vector<int>& v) {
        int n = v.size();
        int l = 0,r = n-1;
        int mx = 0;
        while(l<r){
            int w = r - l;
            int h = min(v[l],v[r]);
            int a = h * w;
            mx = max(mx,a);
            if(v[l]<v[r]) l++;
            else if(v[l]>v[r]) r--;
            else{
                l++;
                r--;
            }
        }
        return mx;
    }
};