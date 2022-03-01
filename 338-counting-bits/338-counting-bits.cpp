class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);
        for(int i = 0;i<=n;i++){
            int b = i,c = 0;
            while(b){
                b &= (b-1);
                c++;
            }
            res[i]=c;
        }
        return res;
    }
};