class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size(); 
        int mul = 1,zmul = 1,c = 0;
        int j = 0;
        for(int i = 0;i<n;++i){
            if(v[i] == 0){
                c++;
                j = i;
                continue;
            }
            mul*=v[i];
        }
        vector<int>res(n,0);
        if(c > 1) return res;
        if(c == 1){
            res[j] = mul;
            return res;
        }
        for(int i = 0;i<n;++i){
            res[i] = mul/v[i];
        }
        return res;
    }
};