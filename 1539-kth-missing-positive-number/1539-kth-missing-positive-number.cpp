class Solution {
public:
    int findKthPositive(vector<int>& v, int k) {
        int start = 0,n = v.size(),miss = 0;
        int res = 0;
        for(int i = 0;i<n;i++){
            int curr = v[i]-start-1;
            int temp = miss;
            miss+=curr;
            start = v[i];
            if(i==0 && k<=miss){
                // cout<<0;
                return k;
            }
            else if(k>=temp && k<=miss){
                if(i){
                    // cout<<1;
                    return v[i-1] + (k-temp);
                }else{
                    // cout<<2;
                    return v[i]+k-temp;
                }
            }else if(i==n-1 && k>=miss){
                // cout<<3;
                return v[i]+k-miss;
            }
        }
        return res;
    }
};