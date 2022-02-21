class Solution {
public:
    int minOperations(vector<int>& v) {
        int n = v.size(),res=0;
        if(n==1) return 0;
        for(int i = 0 ; i<n-1;i++){
            if(!(v[i]<v[i+1])){
                int temp = v[i] - v[i+1] + 1;
                v[i+1]+=temp;
                res+=temp;
            }
        }
        return res;
    }
};