class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int i = 0,j = v.size()-1;
        while(i<j){
            if(v[i]+v[j] == t){
                return {i+1,j+1};
            }else if(v[i]+v[j]>t){
                j--;
            }else{
                i++;
            }
        }
        return {0};
    }
};