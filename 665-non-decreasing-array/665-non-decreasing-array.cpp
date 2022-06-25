class Solution {
public:
    bool checkPossibility(vector<int>& v) {
        int n = v.size();
        for(int i = 0;i<n-1;i++){
            if(v[i]>v[i+1]){
                if(i-1>=0 && v[i-1]>v[i+1]){
                    v[i+1] = v[i];
                }else{
                    v[i] = v[i+1];
                }
                break;
            }
        }
        for(int i = 0;i<n-1;i++){
            if(v[i]>v[i+1]) return false;
        }
        return true;
    }
};