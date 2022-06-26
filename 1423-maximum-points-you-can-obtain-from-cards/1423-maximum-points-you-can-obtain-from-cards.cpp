class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int t = 0;
        for(int i = 0;i<k;++i) t+=c[i];
        int b = t;
        for(int i = k-1,j = c.size()-1;~i;--i,--j){
            t +=c[j]-c[i],b = max(b,t);
        }
        return b;
    }
};