class Solution {
public:
    int maxOperations(vector<int>& v, int k) {
        unordered_map<int,int>mp;
        int n = v.size();
        int i = 0,j = n-1, res = 0;
        sort(v.begin(),v.end());
        while(i<j){
            if(v[i] + v[j] == k ){
                // mp[i] = 1;
                // mp[j] = 1;
                i++;
                j--;
                res++;
            }else if(v[i] + v[j]>k){
                j--;
            }else{
                i++;
            }
        }
        return res;
    }
};