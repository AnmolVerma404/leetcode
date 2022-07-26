class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        int n = v.size();
        if(!n) return 0;
        sort(v.begin(),v.end());
        int mx = 0,cmx = 1;
        // for(auto i : v) cout<<i<<" ";
        for(int i = 0;i<n-1;++i){
            if(v[i] + 1 == v[i+1]){
                cmx++;
            }else if(v[i]!=v[i+1] && cmx>1){
                mx = max(mx,cmx);
                cmx = 1;
            }
        }
        mx = max(mx,cmx);
        return mx;
    }
};