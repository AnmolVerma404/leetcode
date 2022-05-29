class Solution {
public:
    bool com(bitset<26>&a,bitset<26>&b){
        for(int i = 0;i<26;i++){
            if(a[i]&&b[i]) return true;
        }
        return false;
    }
    int maxProduct(vector<string>& w) {
        int n = w.size(),ans = 0;
        vector<bitset<26>>chars(n);
        for(int i = 0;i<n;i++){
            for(auto ch: w[i]){
                chars[i][ch-'a'] = 1;
            }
            for(int j = 0;j<i;j++){
                if(!com(chars[i],chars[j])){
                    ans = max(ans,int(w[i].size()*w[j].size()));
                }
            }
        }
        return ans;
    }
};