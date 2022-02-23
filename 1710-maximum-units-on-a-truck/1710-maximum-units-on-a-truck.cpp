class Solution {
public:
    int maximumUnits(vector<vector<int>>& v, int t) {
        int res = 0;
        sort(v.begin(),v.end(),[](vector<int>a,vector<int>b){
            return a[1]>b[1];
        });
        for(auto i : v){
            // cout<<i[0]<<" "<<i[1]<<"\n";
            int x = min(i[0],t);
            res+=x*i[1];
            t-=x;
            if(!t) break;
            
        }        
        return res;
    }
};