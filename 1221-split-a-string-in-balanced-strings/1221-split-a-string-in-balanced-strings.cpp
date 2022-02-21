class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0,sum = 0,n = s.size();
        // vector<int>c(n);
        for(int i = 0;i<n;i++){
            s[i]=='R'?sum+=1:sum-=1;
            // c[i] = sum;
            // cout<<sum<<" ";
            sum==0?res++:res;
        }
        // for(int i = 0;i<n;i++){
        //     // cout<<c[i]<<" ";
        // }
        return res;
    }
};