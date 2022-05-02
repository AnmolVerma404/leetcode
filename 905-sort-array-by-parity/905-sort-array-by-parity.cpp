class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& v) {
        int n = v.size();
        int i = 0,j = n-1;
        while(i<j){
            //even odd
            int mi = v[i]%2;
            int mj = v[j]%2;
            if(mi==0 && mj!=0){
                i++;
                j--;
            }else if(mi==0 && mj == 0){
                i++;
            }else if(mi!=0 && mj!=0){
                j--;
            }else if(mi!=0 && mj==0){
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
                i++;
                j--;
            }
        }
        return v;
    }
};