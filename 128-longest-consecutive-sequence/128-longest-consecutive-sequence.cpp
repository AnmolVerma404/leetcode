class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        int mx = 0, cmx = 1,n = v.size();
        if(n == 0) return 0;
        sort(v.begin(),v.end());
        for(int i = 1;i<n;++i){
            if(v[i] == v[i-1]){
                continue;
            }
            else if(v[i]-1 == v[i-1]){
                cmx++;
            }else{
                mx = max(mx,cmx);
                cmx = 1;
            }
        }
        return max(mx,cmx);
    }
};