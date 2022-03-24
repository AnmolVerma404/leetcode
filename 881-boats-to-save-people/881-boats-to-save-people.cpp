class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        sort(p.begin(),p.end());
        int i = 0,j = p.size()-1,res = 0;
        while(i<=j){
            if(p[i]+p[j]<=l){
                i++;
                j--;
            }else{
                j--;
            }
            res++;
        }
        return res;
    }
};